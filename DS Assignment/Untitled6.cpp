#include<iostream>
using namespace std;
class DynamicArray
{
	int number,n,c;
	string check;
	int flag;
		int *arr;
	public:
		DynamicArray()
		{
			arr=new int[n];
		}
	void add()
	{
		cout<<"Enter size of array";
		cin>>n;
		fflush(stdin);
		int temp;
		for(int i=0;i<n;i++)
		{
			arr[i]=0;
	}
	
	//	for(int i=0;i<n;i++)
	//	{
			fflush(stdin);
			//int l=n-1;
		cout<<"Enter from where you want to add(start/end)";
		getline(cin,check);
			if(check=="start")
			{
				cout<<"Enter how many numbers";
				cin>>c;
				
			for(int i=0;i<c;i++)
			{
		cout<<"Enter the number";
		cin>>number;
				arr[i]=number;
				if(arr[i+1]<arr[i])
				{
					arr[i+1]=number;
				//	cout<<"h";
				}
			}
			for(int i=0;i<c;i++)
			{
			cout<<arr[i];}
		}
			
		//	if(check=="end")
			//	{
				
				
		//		if(arr[i]>arr[n-1])
		//			{
		//				arr[i]=number;
		//				cout<<arr[i];
		//			}
			//	}
				
			
			
		
			
//			else if(check=="end")
//			{
//				if(arr[n-1]<arr[i])
//				{
//					temp=number;
//				//	cout<<temp;
//				arr[i]=temp;	
//				}
//			}			
}

//	cout<<"ELEMENTS IN ARRAY ARE\n";
//	for(int i=0;i<n;i++)
//	{
//		cout<<" "<<arr[i];
//	}


};
int main()
{
	
	int opt;
	DynamicArray obj;
	obj.add();


}
