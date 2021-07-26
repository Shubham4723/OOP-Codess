#include<iostream>
using namespace std;

class Shape {
	protected: 
		double val1, val2;
	public:
		void getData() {
			cout << "Enter the Value1: ";
			cin >> val1;
			cout << "Enter the Value2: ";
			cin >> val2;
		};
		virtual void displayArea() {};
};

class Rectangle : public Shape {
	public: 
		void displayArea() {
			double res;
			res = val1 * val2;
			cout << "Area of Rectangle: " << res << endl;
		};
};

class Triangle : public Shape {
	public:
		void displayArea() {
			double res;
			res = 0.5 * val1 * val2;
			cout << "Area of Triangle: " << res << endl;
		};
};

int main() {
	Rectangle r;
	cout << "FOR RECTANGLE: " << endl;
	r.getData();
	Triangle t;
	cout << "FOR TRIANGLE: " << endl;
	t.getData();
	r.displayArea();
	t.displayArea();
	return 0;
}		
