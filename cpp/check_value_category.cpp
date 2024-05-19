#include <iostream>
#include <type_traits>

// Function template to print the type
template<typename T>
void print_type(const T& t) {
    std::cout << "decltype is : " << typeid(t).name() << std::endl;
}

class Triangle {
    public:
        int x = 10;
        int y = 10;
        std::string t = "abc";

    Triangle() {

    }

    static Triangle&& getTriangle() {
        Triangle a;
        std::cout << "xuzf afacac : "  << a.x << std::endl;
        return std::move(a);
    }

    static Triangle getTriangle(int y) {
        Triangle a;
        std::cout << "xuzf afacac : "  << a.x << std::endl;
        return a;
    }
};

// Custom is_xvalue trait
template<typename T>
struct is_xvalue : std::false_type {};

// Specialization for rvalue references
template<typename T>
struct is_xvalue<T&&> : std::true_type {};

int main() {
    int x = 10;
    int&& rvref = 5;
    int z;
    // rvalue reference
    int&& t = 7;
    x = t;
    std::cout << std::boolalpha;
    std::cout << "Is x an lvalue reference? " << std::is_lvalue_reference<decltype(x)>::value << std::endl;
    std::cout << "Is z an lvalue reference? " << std::is_lvalue_reference<decltype(z)>::value << std::endl;
    std::cout << "Is z an lvalue reference? by forces lvalueness " << std::is_lvalue_reference<decltype((z))>::value << std::endl;
    // This returns true because although t is defined as of type int&& (r-value reference) it behaves as l-value.
    std::cout << "Is t an lvalue reference? by forces l-valueness " << std::is_lvalue_reference<decltype((t))>::value << std::endl;

    // "hello" is temperory object = r-value. 
    std::cout << "Is \"hello\" an lvalue reference? as entity " << std::is_lvalue_reference<decltype("hello")>::value << std::endl;
    std::cout << "Is \"hello\" an lvalue reference? as expression " << std::is_lvalue_reference<decltype(("hello"))>::value << std::endl;

    std::cout << "Is \"hello\" an lvalue reference? as entity " << std::is_lvalue_reference<decltype(1)>::value << std::endl;
    std::cout << "Is \"hello\" an lvalue reference? as expression " << std::is_lvalue_reference<decltype((1))>::value << std::endl;

    const char* str_ptr = "hello";
    const char str_arr[6] = "hello";
    print_type<decltype(str_ptr)>(str_ptr);
    print_type<decltype(str_arr)>(str_arr);
    print_type<decltype("hello")>("hello");

    std::cout << "is string literal type equal to const char* " <<  std::is_same<decltype(str_ptr), decltype(("hello"))>::value << std::endl;
    Triangle&& triangle = Triangle::getTriangle();
    std::cout << "is triangle xvalue " << std::is_rvalue_reference<decltype(triangle)>::value << std::endl;
    std::cout << "is data member xvalue " << std::is_rvalue_reference<decltype(triangle.x)>::value << std::endl;
    Triangle temp = Triangle::getTriangle(10);
    std::cout << "is data member xvalue return by value " << is_xvalue<decltype(temp.x)>::value << std::endl;
    // type of "hello"
    // std::cout << "Type of 'Hello' " << decltype("hello") << std::endl;
    
    
    std::cout << "Is rvref an rvalue reference? " << std::is_rvalue_reference<decltype(rvref)>::value << std::endl;

    return 0;
}
