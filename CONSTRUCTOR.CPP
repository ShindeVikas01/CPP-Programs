// use of constructor and type off constructor 

#include<iostream>
using namespace std;
class Sample
{
	private:
		int a,b,c;		// 10 + 10 + 350 = 370
	public:
		//Constructor  -  1. Member Function 2. Special [Same Name - Class Name]
		//3. No return type  4. Initialize Object   5. Can not called by object
		Sample()		//default constructor
		{
			a=0;
			b=0;
			c=0;
		}
		Sample(int x,int y,int z)  //parameterized constructor
		{
			a=x;  //S2.a = 70
			b=y;  //S2.b = 80
			c=z;  //S2.c = 90
		}
		Sample(Sample &T)    	//Copy Constructor
		{
			a = T.a;   // S3.a = S2.a
			b = T.b;   // S3.b = S2.b
			c = T.c;   // S3.c = S2.c
		}
		//Destructor - Delete [Free] all memory allocated by constructor
		~Sample()		//Destructor
		{
			cout<<"\nDeleted Object";
		}
		void getData()
		{
			cout<<"\nA="<<a;
			cout<<"\nB="<<b;
			cout<<"\nC="<<c;
		}
};
int main()
{
	Sample S1;
	S1.getData();
	Sample S2(70,80,90);
	S2.getData();
	Sample S3(S2);
	S3.getData();
	return 0;
}