#include <iostream>
#include <type_traits>

class Triangle {
public:
    int x = 10;
    int y = 10;
    std::string t = "abc";

    Triangle() {}
};
struct Triangle_1 {
    int x;
};
// Helper function to determine reference category

int main() {
    // Accessing a member of a temporary object directly
    // std::cout << "Is accessing a member of a temporary object directly an xvalue? " << is_xvalue(Triangle().x) << std::endl;

    // Creating a temporary Triangle object and accessing its member
    // Triangle().x = 20; // Accessing x without std::move()
    std::cout << "Is accessing a member of a temporary object an xvalue? " << std::is_rvalue_reference<decltype(Triangle_1().x)>::value << std::endl; 

    return 0;
}
