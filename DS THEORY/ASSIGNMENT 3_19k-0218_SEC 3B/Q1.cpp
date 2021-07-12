#include<iostream>
#include<queue>
#include<fstream>
class Node;
Node*root;
using namespace std;

class Node
{
	public:
		int data;
		Node*left;
		Node*right;
	
};
class BST
{

	public:
	BST()
	{
		root=NULL;
	}
	//Inserting in a bst with non-recursive
	void Insert(int key)
	{
		Node*temp=root;
		Node*r;
		if(root==NULL)
		{
			Node*new_node=new Node;
			new_node->data=key;
			new_node->left=NULL;
			new_node->right=NULL;
			root=new_node;
			return ;
		}
		while(temp!=NULL)
		{
			r=temp;
			if(key<temp->data)
			{
				temp=temp->left;
			}
			else if(key>temp->data)
			{
				temp=temp->right;
			}
			else
			return;
		}
		Node*new_node=new Node;
		new_node->data=key;
		new_node->left=NULL;
		new_node->right=NULL; 
		if(key<r->data)
		{
			 r->left=new_node;
		}
		else
		{
			r->right=new_node;
		}
	}

	//function to calculate the height of tree
	int height(Node*p)
	{
		int left;int right,h;
		if(p==NULL)
		{
			return 0;
		}
		else
		{
			left=height(p->left);
			right=height(p->right);
			
			if(left>right)
			{
				 h=1+left;
			}
			else
			{
				 h=1+right;
			}
			
		}
		return h;
}
void LevelSum(Node*root,int i)
{
		int sum[i];
		if(root==NULL)
		{
			return;
		}
		queue<Node*>q;
		q.push(root);
		int j=0;
		while(!q.empty())
		{
			int count=q.size();
			while(count!=0)
			{
				Node*temp=q.front();
				q.pop();
				
				sum[j]=sum[j]+temp->data;
				j++;
				
				if(temp->left!=NULL)
				{
					q.push(temp->left);
				}
				if(temp->right!=NULL)
				{
					q.push(temp->right);
				}
				
				count--;
				if(count!=0)
				{
					j--;
				}
			}
		}
		display(sum,i);
}
void display(int sum[],int n)
	{
		cout<<"LEVEL WISE SUM IS :";
		for(int i=0;i<=n;i++)
		{
			if(i==n)
			{
				cout<<sum[i];
				break;
			}
			cout<<sum[i]<<"-";
		}
	}
};
int main()
{
BST obj;
ifstream file;
int n;
file.open("Q1_input000.txt");
if(file==NULL)
{
	cout<<"FILE IS EMPTY";
}
while(!file.eof())
{
	file>>n;
	obj.Insert(n);
}



int height_tree=obj.height(root);
int arr_size=height_tree-1;
obj.LevelSum(root,arr_size);

}
 

