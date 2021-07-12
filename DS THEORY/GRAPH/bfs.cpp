#include<iostream>
#include<queue>
using namespace std;


void BFS(int G[][7],int start,int n)
{
	queue<int>q;
	int i=start;
	int *visited=new int[n];
	cout<<i;
	for(int a=0;a<=7;a++)
	{
		visited[a]=0;
	}
	q.push(i);
	
	while(!q.empty())
	{
		 int u=q.front();
		 q.pop();
		 for(int i=1;i<=7;i++)
		 {
		 	if(G[u][i]==1&&visited[i]==0)
		 	{
		 		cout<<i;
		 		visited[i]=1;
		 		q.push(i);
			 }
		 }
	}
	
}
int main()
{
	int G[7][7]={{0,0,0,0,0,0,0},
	             {0,0,1,1,1,0,0},
	             {0,1,0,1,0,0,0},
	             {0,1,1,0,1,1,0},
	             {0,1,0,1,0,1,0},
	             {0,0,0,1,1,0,1},
	             {0,0,0,0,1,0,0},
				};
	BFS(G,1,7);
				
}
