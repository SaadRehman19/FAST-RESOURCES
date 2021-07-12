#include<iostream>
using namespace std;
class Array
{
	int number,n,c;
	string check;
	int flag;
		int j;
		int *arr;
	public:
	
	void value()
	{
		
		cout<<"Enter size of array";
		cin>>n;
		arr=new int[n];
		fflush(stdin);
		int temp;
		for(int i=0;i<n;i++)
		{
	    	arr[i]=0;
	}
	
	     
		fflush(stdin);
//	do{
		j=0;
		cout<<"Enter from where you want to add(start/end)";
		getline(cin,check);
		if(check=="start")
		{
			for(int i=0;i<n;i++)
			{
		cout<<"Enter the number";
		cin>>number;
				arr[i]=number;
				if(arr[i+1]<arr[i])
				{
					arr[i+1]=number;
			  }
		}
		}
		if(check=="end")
		{
			for(int i=n-1;i>=0;i--)
			{
				cout<<"Enter the number";
				cin>>number;
				if(arr[i]==0)
				{
					arr[i]=number;
				}
			
			}
			for(int i=0;i<n;i++)
			{
			cout<<arr[i];
			}
		//	cout<<arr[n-1];
		}
		
//	}while(j!=n);
		
	}
	
//			
//			

};
int main()
{
	Array obj;
	obj.value();


}
