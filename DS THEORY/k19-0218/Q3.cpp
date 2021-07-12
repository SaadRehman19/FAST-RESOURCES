#include<iostream>
#include<fstream>
int flag=0;
int count=0;
using namespace std;
class Subsets_sum
{
	private:
		int n;
		int *p;
		int sum;
	public:
		Subsets_sum()
		{	
		}
		Subsets_sum(const Subsets_sum &s)
		{
			n=s.n;
			p=new int[n];
			p=(s.p);
			for(int i=0;i<n;i++)
			{
				p[i]=s.p[i];
			}
			sum=s.sum;
		}
		Subsets_sum operator =(const Subsets_sum &s)
		{
			n=s.n;
			p=new int[n];
			p=(s.p);
			for(int i=0;i<n;i++)
			{
				p[i]=s.p[i];
			}
			sum=s.sum;
		}
		// a setter function to return the size of array only from the file
		int set()
		{
			int input;
			ifstream file;
			file.open("Q3_input001.txt");
			for(int i=0;!file.eof();i++)
			{
				file>>input;
				break;
			}
		n=input;
		return n;
	    file.close();
		}
		// this function will take array elements from file and return it to main
		int* array_elements()
		 {
		 	p=new int[n];
		 	ifstream file;
		 	int input;
		 	file.open("Q3_input001.txt");
		 	for(int i=-1;!file.eof();i++)
		 	{
		 		if(i==-1)
			
				{
				file>>input;
				}
			
			else
				if(i<n)
			{
			file>>input;
			p[i]=input;
	}
	
			if(i>n)     // if size exceeds it will return the last value which is sum
			{
				file>>input;
				sum=input;
			}
		}
			return p;
			file.close();
			 }
		int get()
		{
			return sum;
		}	 
		  
int check_subsets_sum(int *array,int n,int temp_sum,int k)
{
          for(int i=k; i<n;i++)
			 {
             if (temp_sum+array[i]<=sum)
               {
                  temp_sum=temp_sum+array[i];       //sum will be calculated one by one
                  check_subsets_sum(array,n,temp_sum,i+1);   
                  if(temp_sum==sum)   
                  {
                  	flag=1;
                  	count++;
                    break;
			    }
			    //if the sum value is greater than desired value, it will backtrack 
                temp_sum=temp_sum-array[i];  
            }
        }
    return count;
}
~Subsets_sum()
{
	delete[] p; 
}	
};
int main()
{
	Subsets_sum obj;
	 int n,sum;
        int j=0,k=0;
         n=obj.set();
    int *array=obj.array_elements();
     sum=obj.get();
        int p=obj.check_subsets_sum(array,n,j,k);
        if(flag==1)
		{
			cout<<"YES!! THERE ARE "<<p<<"SUBSETS WHOSE SUM IS "<<sum;
		}
		else
		{
			cout<<"NO!! THERE ARE NO SUBSETS WHOSE SUM IS"<<sum;
		}      
}
