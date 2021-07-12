#include<iostream>
using namespace std;
void heapify(int*A,int n,int i)
{
	int largest=i;
	int l=(2*i);
	int r=(2*i)+1;
	
	while(l<=n&&A[l]>A[largest])
	{
		largest=l;
	}
	while(r<=n&&A[r]>A[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(A[largest],A[i]);
		heapify(A,n,largest);
	}
}
void display(int *A,int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<A[i];
	}
}
int main()
{
	int *A;
	int n;
	cout<<"Enter how many elements";
	cin>>n;
	A=new int[n];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	for(int i=n/2;i>=1;i--)
	{
		heapify(A,n,i);
	}
	display(A,n);
}
