#include<iostream>
using namespace std;
class Employee
{
	string name;
	int age;
	int experience;
	int w_hour;
	int h_wage;
	int salary;
	public:
		void set_data()
		{
			cout<<"\nEnter employee name:";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter working experience:";
			cin>>experience;
			cout<<"Enter working hour:";
			cin>>w_hour;
		}
		void cal()
		{
			if(age>50&&experience>10&&w_hour>240)
			{
				h_wage=500;
				salary=h_wage*w_hour;
				cout<<"THE SALARY OF EMPLOYEE IS ="<<salary;
			}
			else if((age>40&&age<=50)&&(experience>6&&experience<=10)&&(w_hour>200&&w_hour<=240))
			{
				h_wage=425;
				salary=h_wage*w_hour;
				cout<<"THE SALARY OF EMPLOYEE IS ="<<salary;
			}
			else if((age>30&&age<=40)&&(experience>3&&experience<=6)&&(w_hour>160&&w_hour<=200))
		
			{
				h_wage=375;
				salary=h_wage*w_hour;
				cout<<"THE SALARY OF EMPLOYEE IS ="<<salary;
			}
			else if((age>22&&age<=30)&&(experience>1&&experience<=3)&&(w_hour>120&&w_hour<=160))
			{
				h_wage=300;
				salary=h_wage*w_hour;
				cout<<"THE SALARY OF EMPLOYEE IS ="<<salary;
			}
			else
			{
				cout<<"INVALID INPUT";
			}
}
		
};
int main()
{
	Employee *obj;
	int n;
	cout<<"Enter the no of employee you want to calculate salary";
	cin>>n;
	fflush(stdin);
	obj=new Employee[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nFOR EMPLOYEE:"<<i+1;
		obj[i].set_data();
		obj[i].cal();	
		fflush(stdin);
	}
}
	
	

