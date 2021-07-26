#include <iostream>
using namespace std;

class Test {
    public: 
        int d,m,y;
    public: 
        friend void operator >>(istream&, Test&);
        friend void operator <<(ostream&, Test&);
        Test operator -(Test t1) {
            Test temp;
            temp.d = d - t1.d;
            temp.m = m - t1.m;
            temp.y = y - t1.y;
            return temp;
        }
};

void operator >>(istream &in, Test &t) {
    in>>t.d;
    in>>t.m;
    in>>t.y;
}
void operator <<(ostream &out, Test &t) {
    out<<"dd/mm/yy=" << t.d <<"/"<<t.m <<"/"<<"/"<<t.y << endl;
 
}

int main() {
	
	Test t1, t2, t3;
	cin>>t1;
	cout<<t1;
	cin>>t2;
	cout<<t2;
	t3 = t1-t2;
	cout << t3;
	return 0;
}
