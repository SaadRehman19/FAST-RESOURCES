#include<iostream>
#include<vector>
using namespace std;
int main()
{
//	vector<int>v1(3,10);
//	cout<<v1.capacity();
//	for(int i=0;i<3;i++)
//	{
//	   cout<<v1[i];
//	   cout<<endl;	
//	}
    vector<int>v1;
	for(int j=0;j<10;j++)
	{
		cout<<v1.capacity();//0;
		v1.push_back(10*(j+1));
	//	cout<<v1[j];
	}
	cout<<v1.size()<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<v1[i];
		cout<<endl;
		
	}
	
	cout<<"\nFINAL VALUE OF CAPACITY"<<v1.capacity();
	cout<<endl<<"elements in vector are:"<<v1.size();
	cout<<endl<<"value at index 3 is"<<v1.at(3);  //16
//	vector<int>v2{10,20};
//	for(int j=0;j<5;j++)
//	{
//		cout<<v2[j]<<endl;
//	}
	
}
