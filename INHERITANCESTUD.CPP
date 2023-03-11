// Student percentage calculation using Inheritance in C++

#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"Enter Student Id=";
			cin>>id;
			cout<<"Enter Student Name=";
			cin>>name;
		}
};
class Internal:public Student{
	public:
		int im1,im2;
		void setInternal(){
			cout<<"Internal Mark IM1=";
			cin>>im1;
			cout<<"Internal Mark IM2=";
			cin>>im2;
		}
};
class Result:public Internal{
	private:
		int perc;
	public:
		void setPercentage(){
			perc=(im1+im2)/2;
		}
		void showResult(){
			cout<<"\t"<<id<<"\t"<<name<<"\t\t"<<im1<<"\t\t"<<im2<<"\t\t"<<perc<<endl;
		}
};
int main()
{
	Result objRes[3];
	//Input Details
	for(int i=0;i<=2;i++){
		objRes[i].setStudent();
		objRes[i].setInternal();
		objRes[i].setPercentage();
	}
	
	//Output Details
	cout<<"\n\t\t***Student Details***"<<endl;
	cout<<"\tId"<<"\tName"<<"\t1stInternal"<<"\t2ndInternal"<<"\tPercentage(%)"<<endl;
	for(int i=0;i<=2;i++)
	objRes[i].showResult();
	return 0;
}