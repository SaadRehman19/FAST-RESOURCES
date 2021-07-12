#include<iostream>
using namespace std;
class dynamicArray
{
	public:
	string check1;
	int number;
	public:
		void add()
		{
			cout<<"Enter from where you would like to enter data";
			getline(cin,check1);
			fflush(stdin);
			cout<<"Enter which number";
			cin>>number;
		}
		int get()
		{
			return number;
		}
};
int main()
{
	dynamicArray *obj;
	int n;
	cout<<"Enter Size of array";
	cin>>n;
	dynamicArray arr[n];
	obj=new dynamicArray[n];
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
	    obj[i].add();
	    	if(obj[i].check1=="start")
		{
			cout<<"h";
			if(obj==0)
			{
				cout<<"g";
			cout<<obj[i].get();
		}
	}
}
//	for(int i=0;i<n;i++)
//	{
	
	   //  else if(obj!=0)
	   //  {
	   //  	arr[i+1]=obj[i];
	//	 }
//		}
	//	cout<<arr[i].get();
//	}


	
}
