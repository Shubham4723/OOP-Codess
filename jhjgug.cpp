#include<iostream> 
using namespace std;
class ABC;

class XYZ {
	private:
		int a;
	public: 
		void input1() {
			cout << "Enter the value of first interger: ";
			cin >> a;
			cout << endl;
		}
		friend void sum(XYZ, ABC);
};

class ABC {
	private: 
		int b;
	public: 
		void input2() {
			cout << "Enter the value of second integer: ";
			cin >> b;
			cout << endl;
		}
		friend void sum(XYZ, ABC);
};

void sum(XYZ first, ABC second) {
	int sum = first.a + second.b;
	cout << "The sum of both the numbers is: " << sum << endl;
};

int main() {
	XYZ obj1;
	ABC obj2;
	obj1.input1();
	obj2.input2();
	sum(obj1, obj2);
	return 0;
}
