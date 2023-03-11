// C++ program to print student record using class

#include <iostream>
using namespace std;

class Student
{
	private:
		int id;
		char name[20];
		float fees;
		
	public:
		
		void setStudent()
		{
			cout<<"Enter Student Details";
			cout<<"\nEnter Roll Number:";
			cin>>id;
			cout<<"\nEnter Name:";
			cin>>name;
			cout<<"\nEnter paid fees amount:";
			cin>>fees;
		}
		
		void getStudent()
		{
			cout<<"\n\nStudent Details";
			cout<<"\nRollno:"<<id;
			cout<<"\nName:"<<name;
			cout<<"\nPaidfees:"<<fees;
		}
};

int main()
{
	Student S1;
	S1.setStudent();
	S1.getStudent();
	return 0;
}