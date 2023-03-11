// Student calculation of sem1 and sem2 mark using inheritance in CPP
#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"ID=";
			cin>>id;
			cout<<"Name=";
			cin>>name;
		}
};
class Internal:public Student{
	private:
		int im1,im2;
		
	public:
		void setInternal(){
			cout<<"Enter internal mark for SEM-1=";
			cin>>im1;
			cout<<"Enter internal mark for SEM-2=";
			cin>>im2;
		}
		void getInternalResult(){
			cout<<"\nStudent Id="<<id;
			cout<<"\nStudent Name"<<name;
			cout<<"\nStudent Internal Marks for SEM-1="<<im1<<",SEM-2="<<im2<<endl;
		}
};
class External:public Student{
	private:
		int em1,em2;
		
	public:
		void setExternal(){
			cout<<"Enter external mark for SEM-1=";
			cin>>em1;
			cout<<"Enter external mark for SEM-2=";
			cin>>em2;
		}
		void getExternalResult(){
			cout<<"\nStudent Id="<<id;
			cout<<"\nStudent Name"<<name;
			cout<<"\nStudent External Mark for SEM-1="<<em1<<",SEM-2="<<em2<<endl;
		}
};
int main()
{
	Internal objInt;
	External objExt;
	objInt.setStudent();
	objInt.setInternal();
	objExt.setStudent();
	objExt.setExternal();
	cout<<"\nInternal Result";
	objInt.getInternalResult();
	cout<<"\nExternal Result";
	objExt.getExternalResult();
	return 0;
}