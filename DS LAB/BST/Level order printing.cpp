#include<iostream>
#include<queue>
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
	void Levelorder(Node*root)
	{
		if(root==NULL)
		{
			return;
		}
		queue<Node*>q;
		q.push(root);
		while(!q.empty())
		{
			int count=q.size();
			while(count!=0)
			{
				Node*temp=q.front();
				q.pop();
				
				cout<<temp->data<<" ";
				
				if(temp->left!=NULL)
				{
					q.push(temp->left);
				}
				if(temp->right!=NULL)
				{
					q.push(temp->right);
				}
				count--;
				if(count==0)
				{
					cout<<"\n";
				}
			}
		}
	//	display(sum);
	}
	void display(int sum[])
	{
		for(int i=0;i<4;i++)
		{
			cout<<sum[i]<<" ";
		}
	}
};
int main()
{
BST obj;

obj.Insert(34);
obj.Insert(29);
obj.Insert(65);
obj.Insert(21);
obj.Insert(31);
obj.Insert(43);
obj.Insert(87);
obj.Insert(56);
obj.Insert(28);
obj.Insert(30);

obj.Levelorder(root);

//obj.In_order(root);
}
 

