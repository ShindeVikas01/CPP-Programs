// Complite student system using CPP
#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"Student ID=";
			cin>>id;
			cout<<"Student Name=";
			cin>>name;
		}
};
class Internal:public Student{	
	public:
		int im1,im2;
		void setInternal(){
			cout<<"Student internal mark for SEM-1=";
			cin>>im1;
			cout<<"Student internal mark for SEM-2=";
			cin>>im2;
		}
};
class External{	
	public:
		int em1,em2;
		void setExternal(){
			cout<<"Student external mark for SEM-1=";
			cin>>em1;
			cout<<"Student external mark for SEM-2=";
			cin>>em2;
		}
};
class Result:public Internal,public External{
	private:
		int totalm1,totalm2;
		
	public:
		void calculateTotal(){
			totalm1=im1+em1;
			totalm2=im2+em2;
		}
		void showResult(){
			cout<<"Student ID="<<id<<endl;
			cout<<"Student Name="<<name<<endl;
			cout<<"Student Internal Marks for SEM-1="<<im1<<endl;
			cout<<"Student External Marks for SEM-1="<<em1<<endl;
			cout<<"Student SEM-1 Marks Total="<<totalm1<<endl;
			cout<<"Student Internal Marks for SEM-2="<<im2<<endl;
			cout<<"Student External Marks for SEM-2="<<em2<<endl;
			cout<<"Student SEM-2 Marks Total="<<totalm2<<endl;
		}
};
int main()
{
	Result objRes;
	objRes.setStudent();
	objRes.setInternal();
	objRes.setExternal();
	objRes.calculateTotal();
	cout<<"\nStudent Overall Result"<<endl;
	objRes.showResult();
}