#include<iostream>
#include <sstream>
using namespace std;

void method_one( string& abc ) {
    string parsed;
    stringstream ss(abc);
    while(getline(ss, parsed, '?')) {
        cout<< parsed << endl;
    }
}

void method_two(string &abc) {
    string parsed;
    // int pos = abc.find("?");
    int pos;
    while((pos = abc.find("?")) != -1) {
        cout << abc.substr(0, pos) << std::endl;
        abc.erase(0, pos + 1);
    }
    cout<< abc << endl;
    return;
}

int main() {
    vector<int> ret;
    string abc = "Practicing C++? What is your opinion ? Difficult to decide";
    method_one(abc);
    method_two(abc);
    return 0;
}
