#include<iostream>
using namespace std;
class selectionesort
{
	int *a,n;
	public:
		void set()
		{
			cout<<"enter number of elements in array";
			cin>>n;
			a=new int[n];
			cout<<"enter numbers:\n";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void sort()
		{
			int temp,min;
			for(int i=0;i<n-1;i++)
			{
				min=i;
				for(int j=i+1;j<n;j++)
				{
					if(a[min]>a[j])
					{
						min=j;
					}
					
				}
				if(min!=i)
				{
					swap(a[i],a[min]);
				}
					//temp=a[min];
					//a[min]=a[i];
					//a[i]=temp;
			}
		}
		void print()
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
};
int main()
{
	selectionesort s1;
	s1.set();
	s1.sort();
	s1.print();
}
