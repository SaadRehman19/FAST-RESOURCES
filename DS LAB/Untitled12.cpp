#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
	string name;
	public:
		void set()
		{
			cout<<"Enter name";
			getline(cin,name);
		}
		string get()
		{
			return name;
		}
	
};
int main()
{
	student *obj;
	obj=new student[5];
	cout<<"Enter 5 students name";
	for(int i=0;i<5;i++)
	{
		obj[i].set();
	}
	for(int x=0;x<5;x++)
	{
		for(int y=x+1;y<5-1;y++)
		{
			if(obj[i].get()<obj[i+1].get())
			{
				string temp;
				temp=obj[i].get();
				obj[i].get()=obj[i+1].get();
				obj[i+1].get()=temp;
			}
			
		}
		cout<<obj[y].get();
	}
}

