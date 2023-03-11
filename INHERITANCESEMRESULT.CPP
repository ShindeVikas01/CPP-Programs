// Student calculation of total SEM-1 and SEM-2 mark using inheritance in CPP
#include<iostream>
using namespace std;
class Internal{	
	public:
		int im1,im2;
		void setInternal(){
			cout<<"Enter internal mark for SEM-1=";
			cin>>im1;
			cout<<"Enter internal mark for SEM-2=";
			cin>>im2;
		}
};
class External{	
	public:
		int em1,em2;
		void setExternal(){
			cout<<"Enter external mark for SEM-1=";
			cin>>em1;
			cout<<"Enter external mark for SEM-2=";
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
			cout<<"Student Internal Marks for SEM-1="<<im1<<",SEM-2="<<im2<<endl;
			cout<<"Student External Marks for SEM-1="<<em1<<",SEM-2="<<em2<<endl;
			cout<<"Student SEM-1 Marks Total="<<totalm1<<",SEM-2 Marks Total="<<totalm2<<endl;
		}
};
int main()
{
	Result objRes;
	objRes.setInternal();
	objRes.setExternal();
	objRes.calculateTotal();
	cout<<"\nStudent Overall Result"<<endl;
	objRes.showResult();
}