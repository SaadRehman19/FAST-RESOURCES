#include<iostream>
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h>
#include<cstdlib>
using namespace std;
class DSA
{
	public:
		int *data;
		int size;
		int new_size;
		int loc;
		public:
		DSA(){
		}	
DSA(const DSA & rhs){

this->size= rhs.size;
this->data= new int[size];
memcpy(this->data,rhs.data,(sizeof(int)*rhs.getSize()));

}
unsigned int getSize()const
{
	return size;
}
void set_Data()
{
	for(int i=0;i<size;i++)
	{
		cin>>data[i];
	}
}
void get()
{
	for(int i=0;i<size;i++)
	{
		cout<<data[i];
	}
}
void get1()
{
	for(int i=0;i<new_size;i++)
	{
		cout<<data[i];
	}
}
void ReSize(int nSize)

		{
		if (size != nSize )
		{
		int * temp= new int[size];
		for(int i=0; i<size ; i++){
		temp[i]= *(data+i);
		}
		delete[] data;
		data=0;
		data = new int[nSize];
		memset(this->data, 0, sizeof(int)*nSize);
		for(int i=0; i<size ; i++){
		*(data+i)=temp[i];
		}
		new_size=nSize;
		delete [] temp;
		temp=0;
		
		}
		
	}
};
class ODSA:public DSA
{
	//int temp;
	public:
		ODSA(int n)
		{
			size=n;
            data= new int[size];
            memset(this->data, 0, sizeof(int)*size);
		}
		void insertion()
		{
			cout<<"\nEnter values of array";
			fflush(stdin);
			
			for(int i=size;i<new_size;i++)
			{
			  cin>>data[i];	
			}
			for(int i=0;i<(new_size-1);i++)
			{
				for(int j=i+1;j<new_size;j++)
				{
					if(data[j]<data[i])
					{
						 loc=j;
					}
				}
				int temp=data[i];
				data[i]=data[loc];
				data[loc]=temp;
			}
			
		}
		void searching()
		{
			int key;
			cout<<endl<<"Enter the number you want to search";
			cin>>key;
			for(int i=0;i<new_size;i++)
			{
				if(data[i]==key)
				{
					cout<<"The number "<<data[i]<<" is found at index :"<<i;
				}
			}
			
		}
	
};
/*class UDSA:public DSA
{
	/*	public:
		void insertion()
		{
			cout<<"Enter values of array";
			for(int i=size;i<new_size;i++)
			{
			     cin>>data[i];	
			}
		}
		void searching()
		{
			int key;
			cout<<endl<<"Enter the number you want to search";
			cin>>key;
			for(int i=0;i<new_size;i++)
			{
				if(data[i]==key)
				{
					cout<<"The number "<<data[i]<<" is found at index :"<<i;
				}
			}
			
		}*/

int main()
{
	cout<<"FOR ORDERED ARRAY\n";
	int x,res;
	cout<<"Enter the size of array";
	cin>>x;
	ODSA obj(x);
	obj.set_Data();
	obj.get();
	cout<<"Enter the new size for resize function";
	cin>>res;
	obj.ReSize(res);
	//obj.set_Data();
	obj.get1();
	obj.insertion();
	obj.get1();
	
	
}
