#include<iostream>
#include<string.h>
using namespace std;
class maxheap
{
	int *a,n;
	public:
		void set_max_heap()
		{
			int i;
			cout<<"how many elements in max heap: ";
			cin>>n;
			a=new int[n];
			cout<<"enter numbers: \n";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<"\nAFTER HEAPIFY\n";
			for(i=n/2-1;i>=0;i--)
			{
				max_heapify(n,i);
			}
			
		}
		
		void display()
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		void max_heapify(int n,int i) 
		{
		    
		    int largest = i;
		    int l= 2 * i + 1;
		    int r = 2 * i + 2;
		  
		    if (l<n && a[l]>a[largest])
		      largest = l;
		  
		    if (r<n && a[r]>a[largest])
		      largest = r;
		  
		    
		    if (largest != i) {
		      swap(a[i], a[largest]);
		      max_heapify(n, largest);
		    }
		}
		
		int get_n()
		{
			return n;
		}
		void ascending_bymax(int num)
		{
		  	int i;
		  	if(num==0)
		  	{
		  		return;
			}
			else
			{
				swap(a[0],a[num-1]);
			  	num=num-1;
			  	for(i=num/2-1;i>=0;i--)
				{
					max_heapify(num,i);
				}
				ascending_bymax(num);
			}
		}
		int check(int num)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]==num)
				{
					return i;
				}
				else
				{
					cout<<"value not found";
				}
			}	
		}
		void delete_maxheap(int num)
		{
		  	swap(a[num],a[n-1]);
		  	n=n-1;
		  	for(int i=n/2-1;i>=0;i--)
			{
				max_heapify(n,i);
			}
		}
		void resize()
		{
		   int *temp = new int[n];
		   for(int i=0;i<n;i++)
		   {
		   		temp[i] = a[i];
			}
			
		    n=n+1;
			a=new int[n];
			//memcpy( temp, a, n-1 * sizeof(int) );
			memset(a, 0, sizeof(int)*n);
			for(int i=0;i<n-1;i++)
			{
				a[i]=temp[i];
			}
		   delete[] temp;
		}
		int insert_max_heap(int val)
		{
			int i,parent;
			resize();
			a[n-1]=val;
			i=n-1;
			while(i>0)
			{
				parent=(i-1)/2;
				if(a[parent]<a[i])
				{
					swap(a[parent],a[i]);
					i=parent;
				}
				else
				{
					break;
				}
			}
		}
		
}; 
int main()
{
	int n,m,num;
	maxheap h1;
	h1.set_max_heap();
	h1.display();
	cout<<endl;
	cout<<"enter number for insert in max heap";
	cin>>m;
	h1.insert_max_heap(m);
	h1.display();
	
	cout<<"\nenter number for delete in max heap";
	cin>>num;
	
	h1.delete_maxheap(h1.check(num));
	h1.display();
	
	n=h1.get_n();
	cout<<"\nascending order by max heap\n";
	h1.ascending_bymax(n);
	cout<<endl;
	h1.display();
}
