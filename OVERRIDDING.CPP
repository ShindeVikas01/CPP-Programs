// Method Overriding in inheritance
#include<iostream>
using namespace std;

class Base
{
	public:
		void show() {
			cout<<"\nShow fun of Base Class";
		}	
};
class Derived : public Base
{
	public:
		void show() {								//Method Overriding
			cout<<"\nShow fun of Derived Class";
			//Base::show();							//method 1
		}
};

int main()
{
	Derived D;
	D.show();
//	D.Base::show();									//Method 2
	Base *B;										//Method 3-------------Only in Cpp
	B = &D;
	B -> show();
	return 0;
}