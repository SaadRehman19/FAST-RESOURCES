#include<iostream>
using namespace std;
 
int Partition(int A[],int lb,int ub)
{
	int pivot=A[lb];
	int start=lb;
	int end=ub;
while(start<end)
{	
	while(A[start]<=pivot)
	{
		start++;
	}
	while(A[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
	swap(A[start],A[end]);
}
}

	swap(A[lb],A[end]);
    return end;
}
void QuickSort(int A[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=Partition(A,lb,ub);
		QuickSort(A,lb,loc-1);
		QuickSort(A,loc+1,ub);
	}
 }
int main()
{
	int A[]={11,13,17,5,6,23,16,23,15,17,18,23,11,90};
	int size=sizeof(A)/sizeof(A[0]);
	QuickSort(A,0,size-1);
	
	for(int i=0;i<size-1;i++)
	{
		cout<<A[i]<<" ";
	}
}
