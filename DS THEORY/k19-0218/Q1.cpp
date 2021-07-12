#include<iostream>
#include<cstdlib>
#include<string.h>
#include<cstring>
static int flag=0;
using namespace std;
int main()
{
	int row,column;
	char w[25];
	cout<<"Enter size of row";
	cin>>row;
	cout<<"Enter size of column";
	cin>>column;
	char a[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
		cout<<"\n Enter "<<j+1<<"character of "<<i+1<<"row in CAPITAL :";
	   cin>>a[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
	    cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter the word you want to search";
	cin>>w;
	string c=w;
	int b=strlen(w);
	//cout<<b;
	int l=b;
	char size[b];
	int d=0;
	for(int k=0;k<b;k++)
	{
	    size[d]=c.at(k);
	    d++;
	}
	for(int k=0;k<b;k++)
	{
	cout<<size[k]<<endl;
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
				if(a[i][j]==size[j])
				{
					if(size[j]==c.at(j))
					{
					while(b>0)
					{
					flag++;
					b--;
			    	}
				}	
			}
		}
	}
	//	cout<<flag;
	//	cout<<l;
	if(flag==l)
	{
		cout<<"WORD HAS BEEN FOUND";
	}
}

