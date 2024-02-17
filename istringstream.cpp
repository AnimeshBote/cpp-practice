#include<iostream>
#include<sstream>
using namespace std;
int main() {
	string s = "453(2(3)(1))(6(5))";
	istringstream in(s);
	int num;
	char ch;
	if(in >> num) {
		cout << num << endl;
	}
	while(in >> ch) {
		cout << ch << endl;
	}
	return 0;
}
