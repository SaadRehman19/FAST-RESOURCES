#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	struct Node*left,*right;
	public:
	 Node*create()
		{
			int x;
			struct Node*new_node=new Node;
			cout<<"Enter data (enter -1 for no new node)";
			cin>>x;
			if(x==-1)
			{
				return 0;
			}
			else
			{
				new_node->data=x;
				cout<<"Enter left child of node :"<<x;
				new_node->left=create();
				cout<<"Enter right child of node :"<<x;
				new_node->right=create();
			    return new_node;	
			}
		}
		void Pre_order(Node*root)
		{
			if(root==0)
			{
				return ;
			}
			else
			{
				cout<<root->data<<" ";
				Pre_order(root->left);
				Pre_order(root->right);
			}
		}
		void Post_order(Node*root)
		{
			if(root==0)
			{
				return ;
			}
			else
			{
				Post_order(root->left);
				Post_order(root->right);
				cout<<root->data;
			}
		}
		void Inorder(Node*root)
		{
			if(root==0)
			{
				return ;
			}
			else
			{
				Inorder(root->left);
				cout<<root->data;
				Inorder(root->right);
			}
		}
};
int main()
{
	Node obj;
    Node*root;
	root=0;
	root=obj.create();
	cout<<"\n PRE-ORDER DATA IS :";
	obj.Pre_order(root);
	
}
