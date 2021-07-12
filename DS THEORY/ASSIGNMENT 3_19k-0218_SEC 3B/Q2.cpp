#include<fstream>
#include<iostream>
#include<vector>
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
int countnodes(Node *root)
{
	static int count;
    if(root != NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}
    void PATHSUM(Node* temp,vector<int>a,int count)  
	{  
	static int total_nodes;
	int flag=0;
		if (temp == NULL)  
	        return;  
	      
	    a.push_back(temp->data); 
	    if(temp->left==NULL && temp->right==NULL)
		{
			int sum=0;  
	        for(int i=0;i<a.size();i++)
			{
				sum=sum+a[i];
				total_nodes++;
			}
			cout<<sum<<" "; 
			
		//	if(flag==1)
		//	{
		//		while(1)
		//		{
		//			break;
		//		}	
		//	}		
		} 
		else
		{
			PATHSUM(temp->left,a,count);
			PATHSUM(temp->right,a,count);
		}
		
	}
};
int main()
{
	BST obj;
	int n;
	ifstream file;
	file.open("Q2_input000.txt");
	while(!file.eof())
	{
		file>>n;
		obj.Insert(n);
	}
	vector<int>v;
	int count=obj.countnodes(root);
	obj.PATHSUM(root,v,count);

}
