#include<iostream>
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
			void createnode(int data)
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
				else if(newnode->data<root->data)
				{
					insertnode(root->left,newnode);
				}
				else if(newnode->data>=root->data)
				{
					insertnode(root->right,newnode);
				}
			}
		
			void search(int data)
			{
				node *temp;
				temp=root;
				searchnode(temp,data);
			}
			void searchnode(node *temp,int data)
			{
				if(temp==NULL)
				{
					cout<<"Data not found"<<endl;
					cout<<"Tree is empty"<<endl;
					return;
				}
				else if(temp->data==data)
				{
					cout<<"Data is found "<<endl;
				}
				else if(data<temp->data)
				{
					searchnode(temp->left,data);
				}
				else	//when data is greater
				{
					searchnode(temp->right,data);
				}
			}
			void Display()
			{
				node *temp;
				temp=root;
				printinorder(temp);
			}
			void printinorder(node* temp)
			{
				if(temp==NULL)
				{
					cout<<"Root is empty nothing to display"<<endl;
					return;
				}
				else if(temp->left!=NULL)
				{
					printinorder(temp->left);
				}
				cout<<temp->data<<", ";
				if(temp->right!=NULL)
				{
					printinorder(temp->right);
				}
			}
			void deletenode(int data)
			{
				deletion(root,data);
			}
		
			node* findmin(node* root)
			{
				while(root->left != NULL) root = root->left;
				return root;
			}
			void deletion(node*& root,int data)
			{
				if(root==NULL)
				{
					return;
				}
				else if(data<root->data)
				{
					deletion(root->left,data);
				}
				else if(data>root->data)
				{
					deletion(root->right,data);		
				}
				else
				{
					if(root->left==NULL && root->right==NULL)
					{
						delete root;
						root=NULL;

					}
					
						else if(root->left==NULL)
						{
							node *temp;
							temp=root;
							root=root->right;
							delete temp;
						//	return;
						}
						else if(root->right==NULL)
						{
							node *temp;
							temp=root;
							root=root->left;
							delete temp;
						//	return;
						}
						else
						{
							node *temp=findmin(root->right);
							root->data=temp->data;
							deletion(root->right,temp->data);
						}
						
				}
				return;
			}
		
		
};
int main()
{
	BST b1;
	b1.createnode(15);
	b1.createnode(10);
	b1.createnode(20);
	b1.createnode(17);
	b1.createnode(25);
	b1.createnode(8);
	b1.createnode(12);
	b1.search(15);
	b1.Display();
	b1.deletenode(20);
	cout<<endl;
	b1.Display();
	
}
