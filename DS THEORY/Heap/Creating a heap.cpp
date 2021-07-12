#include<iostream>
void display(int A[]);
using namespace std;
void insert_heap(int A[],int n)
{
	int i=n;
	while(i>1)
	{
	//	int parent=i/2;
		if(A[i/2]<A[i])
		{
			A[i]=A[i/2];
			i=i/2;
		}
		else
		{
			
		}
	}

}
/*void insert_heap(int A[],int n)
{
	int temp,i=n;
	temp=A[n];
    while(i>1&&A[i/2]>temp)
	{
		A[i]=A[i/2];
		i=i/2;
	}
	A[i]=temp;
}*/
void create_Heap()
{
	int A[]={0,10,20,30,25,5,40,35};
	for(int i=2;i<=7;i++)
	{
		insert_heap(A,i);
		
	}
	for(int i=1;i<=7;i++)
	{
		cout<<A[i];
}
}
int main()
{
	create_Heap();
}
