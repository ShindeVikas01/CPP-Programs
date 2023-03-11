//CPP program to print employees record using class

#include <iostream>
using namespace std;

class Student
{
	private:
		int id;
		char name[20];
		float salary;
		
	public:
		void setEmployee()
		{	
			cout<<"\nEnter Emplyee Id:";
			cin>>id;
			cout<<"\nEnter Name:";
			cin>>name;
			cout<<"\nEnter Salary:";
			cin>>salary;
		}
		
		void getEmployee()
		{
			cout<<"\n "<<id<<" \t"<<name<< "\t"<<salary;
		}
};

int main()
{
	Student S[3];
	int i;
	cout<<"Enter Emplyee Details";
	for(i=0;i<=2;i++)
	{
		S[i].setEmployee();
	}
	cout<<"\n\nEmplyee Details";
	cout<<"\n  ID \tNAME \tSALARY";
	for(i=0;i<=2;i++)
	{
		S[i].getEmployee();
	}
	return 0;
}
