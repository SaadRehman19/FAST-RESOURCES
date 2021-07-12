#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node* right;
		node()
		{
			data=0;
			left=NULL;
			right=NULL;
		}
};
class BST
{
	protected:
		node* root;
		public:
			BST()
			{
				root=NULL;
			}
			void insertion(int data)
			{
				node* newnode=new node();
				newnode->data=data;
				insertnode(root,newnode);
			}
			void insertnode(node *&root,node *&newnode)
			{
				if(root==NULL)
				{
					root=newnode;
				}
				else if(newnode->data<=root->data)
				{
					insertnode(root->left,newnode);
				}
				else if(newnode->data>root->data)
				{
					insertnode(root->right,newnode);
				}
			}
			void inorder(){in_order(root);}
			void in_order(node *temp)
			{
				if(temp!=NULL)
				{
					in_order(temp->left);
					cout<<temp->data<<" ";
					in_order(temp->right);
				}
			}
            
  		void BFS(int data)
		{
			bool flag=false;
			node *tmp=root;
			queue<node*> queue;
			queue.push(tmp);
			while(!queue.empty())
			{
				node* temp0=queue.front();
				queue.pop();
				if(temp0->data==data)
				{
					cout<<"\nData found:"<<temp0->data<<endl;
					flag=true;
					break;
				}
				queue.push(temp0->right);
				queue.push(temp0->left);
			}
			if(flag==false)
			{
				cout<<"Data not found"<<endl;
			}
		}

};
int main()
{
	BST b1;
	b1.insertion(15);
	b1.insertion(10);
	b1.insertion(20);
	b1.insertion(17);
	b1.insertion(25);
	b1.insertion(8);
	b1.insertion(12);
	b1.inorder();
	b1.BFS(17);
}

