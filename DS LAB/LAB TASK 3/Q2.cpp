#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int rows,column,n;
	vector<vector<int> >v;
	cout<<"Enter the no of rows";
	cin>>rows;
	for(int i=0;i<rows;i++)
	{
		vector<int>inner;
		cout<<"\nHOW MANY COLUMN YOU WANT IN ROW "<<i<<":";
		cin>>column;
		for(int j=0;j<column;j++)
		{
			cout<<"Enter elements";
			cin>>n;
			inner.push_back(n);
		}
	//	cout<<v.capacity();
		v.push_back(inner);
	}
		cout<<"ELEMENTS IN JAGGED ARRAY ARE :\n";
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
	//cout<<v.at(4);
}
