#include<iostream>
#include<fstream>
using namespace std;
int *x,*y;
int number,r,c=0,d=0;
int count=0,l=0,flag=0;
class Palindrome
{
	int *p;
	int n;
	public:
		Palindrome(){
		}
	Palindrome(const Palindrome &p1 )
	{
	    n=p1.n;
	    p=new int[n];
	    p=(p1.p);
	    for(int i=0;i<n;i++)
	    {
	    	p[i]=p1.p[i];
		}
	}
	Palindrome operator =(const Palindrome &p1)
	{
		n=p1.n;
	    p=new int[n];
	    p=(p1.p);
	    for(int i=0;i<n;i++)
	    {
	    	p[i]=p1.p[i];
		}
	}
	// a setter function to take values from file
	int setter()
	{
		int input;
		ifstream fin;
		fin.open("Q2_input001.txt");
		for(int i=0;!fin.eof();i++)
		{
			fin>>input;   
			break;        //the first value in file would be size of array that's why break condition is use to take size only                    		
		}
		n=input;
		fin.close();
		return n;
	}
	// this function will calculate the total number of digits from the file
	void cal_digit(int n)
	{
		p=new int[n];
		ifstream fin;
		int input;
		fin.open("Q2_input001.txt");
		for(int i=-1;!fin.eof();i++)
		{
			//fin>>input;
			if(i==-1)
			{
				fin>>input;
			}
			else{
			//cout<<"s";
			fin>>input;
			p[i]=input;
			
			}
	}
	for(int i=0;i<n;i++)
	{
  number=p[i];
		while(number>0)
		{
			r=number%10;
			number=number/10;
			count++;
		    l++;
		}
}
x=new int[count];        
y=new int[count];
fin.close();
}
// this is a recursive function which will be recursively call untill base condition execute 
void calculation(int k,int n)
	{
		int o=0;
		int arr[6];
if(n==0)
{
	check_condition();  // it will jump to another function 
}
else
{
	int c=0;
	number=p[k];
	while(number>0)
	{
		r=number%10;
		number=number/10;
		arr[c]=r;
		c++;
	}
	while(c-1>=0)
	{
		x[d]=arr[c-1];
		d++;
		c--;
	}
	calculation(k+1,n-1);
}
}
void check_condition()   //this is a function which is comparing the indexes of two arrays
{
	int j=0;
	while(j<count){
   y[l-1]=x[j];
	l--;
	j++;}
//cout<<"\nFOR REVERSE";
for(int i=0;i<count;i++)
{
//	cout<<y[i]<<endl;
}
for(int k=0;k<count;k++)
{
if(x[k]==y[k])
	{
	flag++;
	}
	else
	{
	flag=0;
	}
}
}
void check()
	{
		if(flag==count)
{
	cout<<"YES !! IT IS A PALINDROME";
}
else if(flag!=count)
{
	cout<<"NO!! IT IS NOT A PALINDROME";
}
	}
	~Palindrome()
	{
		delete[] p;
	}
};
int main()
{
int n,k=0;
Palindrome obj;
n=obj.setter();
obj.cal_digit(n);
obj.calculation(k,n);
obj.check();
}
	
	
