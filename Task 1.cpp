#include<iostream>
using namespace std;

class Base {
public:
	void square(int num) {
		cout << "Square = " << num * num << endl;
	}
};
class Derived:public Base {
public:
	void cube(int num) {
		cout << "Cube = " << num * num * num << endl;
	}
};
int main() {
	int n1, n2;
	cout << "Enter the number for square : ";
	cin >> n1;
	cout << "Enter the number for cube : ";
	cin >> n2;

	Derived D;
	D.square(n1);
	D.cube(n2);
	return 0;
}
