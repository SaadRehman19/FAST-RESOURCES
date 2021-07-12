#include<iostream>
#include<cstring>
using namespace std;
class student
{
	public:
		string name;
	
	void set()
	{
		
		cout<<"enter name:";
		getline(cin,name);
		
	}
	string get()
	{
		return name;
	}
	
};
int main()
{
	int i,round,n;
	string temp;

	student *p = new student[5];
	cout<<"Enter 5 student's name\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nemployee "<<i+1<<":\n";
		p[i].set();
	}
	cout<<endl;
	for(round=1;round<5;round++)
	{
		for(i=0;i<5-round;i++)
		{
			if(p[i].get()<p[i+1].get())
			{
				temp=(p+i)->get();
				(p+i)->name=(p+i+1)->get();
				(p+i+1)->name=temp;		
		}
	}
}
	for(i=0;i<5;i++)
	{
	
		cout<<(p+i)->get()<<endl;
	}
	
	
	
}
