#include<iostream>
#include <string.h>
#include<cstdlib>
#include "Q1.h"

void DSA::ReSize(int ns)
	{
		if (size != ns )
		{
		int * temp= new int[size];
		for(int i=0; i<size ; i++){
		temp[i]= *(data+i);
		}
		delete[] data;
		data=0;
		data = new int[ns];
		memset(this->data, 0, sizeof(int)*ns);
		for(int i=0; i<size ; i++){
		*(data+i)=temp[i];
		}
		nsize=ns;
		delete [] temp;
		temp=0;
		
		}
		
	}
	
	void DSA::get()
	{
		for (int i=0;i<nsize;i++)
		{
			cout<<data[i]<<" ";
		}
		}
		
		void DSA::set()
		{
			cout<<"enter values of array\n";
			for(int i=0;i<size;i++)
			{
				cin>>*(data+i);
			}
		}
		ODSA::ODSA(int n)
		{
			size=n;
			data= new int[size];
			memset(this->data, 0, sizeof(int)*size); 
		}
	void ODSA::insertion()
	{
		cout<<"\nENTER ELEMENTS IN REMAINING PART";
		for(int i=size;i<nsize;i++)
		{
			cin>>data[i];
		}
			for(int i=0;i<(nsize-1);i++)
			{
			     a=data[i];
			     loc=i;
				for(int j=i+1;j<nsize;j++)
				{
					if(data[j]<a)
					{
					    a=data[j];
						 loc=j;
					}
				}
			     temp=data[i];
				data[i]=data[loc];
				data[loc]=temp;
			}
	/*	for(int round=1;round<nsize;round++)
		{
			for(int i=0;i<nsize-round;i++)
			{
				if(data[i]>data[i+1])
				{
					temp=data[i];
					data[i]=data[i+1];
					data[i+1]=temp;
				}
			}
		}
	}*/
}
	void ODSA::searching() 
		{
		int i,a;
		cout<<"\nenter number for search: ";
		cin>>a;
		for(i=0;i<nsize;i++)
		{
			if(a==data[i])
			{
				cout<<data[i]<<" is found at index "<<i<<endl;
			}
		}
		
	}
	
	UDSA::UDSA(int n)
		{
			size=n;
			data= new int[size];
			memset(this->data, 0, sizeof(int)*size); 
		}
		
		void UDSA::insertion1()
	{
		int a,i;
		cout<<"enter elements in unordered array:\n";
		for(i=size;i<nsize;i++)
		{
			cin>>data[i];
		}
	}
	
	void UDSA::searching1()
	{
		int i,a;
		cout<<"\nenter number for search: ";
		cin>>a;
		for(i=0;i<nsize;i++)
		{
			if(a==data[i])
			{
				cout<<data[i]<<" is found at index "<<i<<endl;
			}
		}
	}
	
	
