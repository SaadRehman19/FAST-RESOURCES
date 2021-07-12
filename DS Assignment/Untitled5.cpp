#include<iostream>
using namespace std;
class DynamicArray
{
	int number,n;
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
		arr=new int[n];
		fflush(stdin);
		int temp;
		for(int i=0;i<n;i++)
		{
	    	arr[i]=0;
	}
		fflush(stdin);
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
		    cout<<"ELEMENTS IN ARRAY ARE :";
			for(int i=0;i<n;i++)
			{
			cout<<" "<<arr[i];
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
			 cout<<"ELEMENTS IN ARRAY ARE :";
			for(int i=0;i<n;i++)
			{
			cout<<" "<<arr[i];
			}
		}
	}		

void search()
{
	int d,pos,flag;
	cout<<"\nEnter number for search";
	cin>>d;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==d)
		{
			pos=i;
			flag=1;
			cout<<"\nElement "<<d<<" is found at index :"<<pos;
		}
	
	}
		if(flag!=1)
	cout<<"\nElement not found";

	
}
void delete_element()
{
	int del,pos,flag;
	cout<<"\nWHICH NO YOU WANT TO DELETE ?:";
	cin>>del;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==del)
		{
			arr[i]=0;
			pos=i;
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"\nNUMBER "<<del<<"HAS BEEN DELETED!!";
		for(int i=0;i<n;i++)
		{
			cout<<" "<<arr[i];
		}
	}
	else
	{
		cout<<"\nNUMBER NOT FOUND";
	}
}
void update()
{
	
	int a;
	cout<<endl<<"ENTER INDEX NO OF NUMBER YOU WANT TO UPDATE ";
	fflush(stdin);
	cin>>a;
	int array[2];
	for(int i=0;i<n;i++)
	{
	if(a==arr[i])
	{
		cout<<"\nEnter new number";
		cin>>array[a];
		arr[i+1]=array[a];
	}
}
cout<<"\nUPDATED ELEMENTS ARE :";
for(int i=0;i<n;i++)
{
	cout<<" "<<arr[i];
}
	
}

};
int main()
{
	int opt;
	DynamicArray obj;
	obj.add();
	obj.search();
	obj.delete_element();
	fflush(stdin);
	obj.update();

}
