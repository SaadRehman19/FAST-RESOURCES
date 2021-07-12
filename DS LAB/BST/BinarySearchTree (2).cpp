#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node *right;
		node()
		{
			data=0;
			left=NULL;
			right=NULL;
		}
};
class BST
{
	public:
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
				newnode->right=NULL;
				newnode->left=NULL;
				insertnode(root,newnode);
			}
			node *insertnode(node *&root,node *&newnode)
			{
				if(root==NULL)
				{
					root=newnode;
				}
				else if(newnode->data < root->data)
				{
					insertnode(root->left,newnode);
				}
				else if(newnode->data >= root->data)
				{
					insertnode(root->right,newnode);
				}
				//return root;
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
					return;
				}
				else if(temp->data==data)
				{
					cout<<"Data is found "<<endl;
				}
				else if(data < temp->data)
				{
					searchnode(temp->left,data);
				}
				else	
				{
					searchnode(temp->right,data);
				}
			}
			void Display()
			{
				node *temp;
				temp=root;
				cout<<"INORDER\n";
				printinorder(temp);
				cout<<"\nPREORDER\n";
				printpreorder(temp);
				cout<<"\nPOSTORDER\n";
				printpostorder(temp);
			}
			void printinorder(node* temp)
			{
				if(temp==NULL)
				{
					return;
				}
				else
				{
					printinorder(temp->left);
					cout<<temp->data<<" ";
					printinorder(temp->right);
				}
			}
			void printpreorder(node* temp)
			{
				if(temp==NULL)
				{
					return;
				}
				else
				{
					cout<<temp->data<<" ";
					printpreorder(temp->left);
					printpreorder(temp->right);
				}
			}
			void printpostorder(node* temp)
			{
				if(temp==NULL)
				{
					return;
				}
				else
				{
					printpostorder(temp->left);
					printpostorder(temp->right);
					cout<<temp->data<<" ";
				}
			}
			int height(node *temp)
			{
				static int h=0;
				int l,r;
				if(temp==NULL)
				return 0;
				else
				{
					l=height(temp->left);
					r=height(temp->right);
					if(l>r)
					h=l+1;
					else
					h=r+1;
				}	
			return h;
			}
	void deletenode(int data)
	{
		root=deletion(root,data);
	}
	node* findmin(node* root)
	{
		while(root->left != NULL) root = root->left;
		return root;
	}
	node* deletion(node*& root,int data)
	{
		if(root==NULL)
			{
				return root;
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
							root->right= deletion(root->right,temp->data);
							//delete temp;
						}
				}
				return root;
			}	
				
};
int main()
{
	BST b1;
	int a,n;
	cout<<"how many number add in tree? ";
	cin>>n;
	cout<<"enter  numbers: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a;
		b1.createnode(a);
	}
	b1.Display();
	cout<<b1.height(b1.root);
	cout<<"enter data for search..";
	cin>>a;
	b1.search(a);
	cout<<"enter data for delete: ";
	cin>>a;
	b1.deletenode(a);
	b1.Display();
	
}


