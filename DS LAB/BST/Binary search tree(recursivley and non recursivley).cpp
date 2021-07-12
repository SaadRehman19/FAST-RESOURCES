#include<iostream>
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
	//Inserting in a bst recursively
	Node* Insert_recursively(Node*root,int key)
	{
		Node*temp=root;
		if(temp==NULL)
		{
			Node*new_node=new Node;
			new_node->data=key;
			new_node->left=NULL;
			new_node->right=NULL;
		//	cout<<new_node;
			return new_node;    //this will be returned to where it was called, to link the nodes
		}
		if(key<temp->data)
		{
			temp->left=Insert_recursively(temp->left,key);
		//	cout<<"\n"<<temp->left<<"temp left";
		}
		else if(key>temp->data)
		{
			temp->right=Insert_recursively(temp->right,key);
		}
		return temp;         //this will be returned to root always ,where it was called 
	}
	void Search(int key)
	{
		Node*temp=root;
		while(temp!=NULL)
		{
			if(key==temp->data)
			{
				cout<<"KEY FOUND :"<<key;
				return;
			}
			if(key<temp->data)
			{
				temp=temp->left;
			}
			else if(key>temp->data)
			{
				temp=temp->right;
			}
		}
	}
	//Search in bst recursively
		void search_recursively(int data)
				{
					Node *temp;
					temp=root;
					searchnode(temp,data);
				}
		void searchnode(Node *temp,int data)
		{
				if(temp==NULL)
					{
						cout<<"Data not found"<<endl;
						cout<<"Tree is empty"<<endl;
						return;
					}
					else if(temp->data==data)
					{
						cout<<"Data is found :"<<data;
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
	void In_order(Node*p)
	{
		if(p!=NULL)
		{
			In_order(p->left);
			cout<<p->data<<" ";
			In_order(p->right);
		}
		else
		{
		//	cout<<"ROOOT IS EMPTY";
		}
	}
	void Pre_order(Node*p)
	{
		if(p!=NULL)
		{
			cout<<p->data<<" ";
			Pre_order(p->left);
			Pre_order(p->right);
		}
		else
		{
		//	cout<<"ROOOT IS EMPTY";
		}
	}
	void Post_order(Node*p)
	{
		if(p!=NULL)
		{
			Pre_order(p->left);
			Pre_order(p->right);
			cout<<p->data<" ";
		}
		else
		{
		//	cout<<"ROOOT IS EMPTY";
		}
	}
	void deletenode(int data)
	{
		deletion(root,data);
	}
	Node* findmin(Node* root)
	{
		while(root->left != NULL) root = root->left;
		return root;
	}
	void deletion(Node*& root,int data)
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
							Node *temp;
							temp=root;
							root=root->right;
							delete temp;
						//	return;
						}
						else if(root->right==NULL)
						{
							Node *temp;
							temp=root;
							root=root->left;
							delete temp;
						//	return;
						}
						else
						{
							Node *temp=findmin(root->right);
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
	int x,n,a,search;
	cout<<"YOU WANT TO RUN THIS PROGRAM RECURSIVELY OR NON-RECURSIVELY?(\n1.RECRSIVELY\n2.NON-RECURSIVELY ";
	cin>>x;
	switch(x)
	{
	case 1:
	cout<<"HOW MANY NODES YOU WANT TO INSERT ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n;
		root=b1.Insert_recursively(root,n);
	}
	int choice;
	cout<<"FROM WHICH TRAVERSAL YOU WANT TO TRAVERSE? \n1.PRE-ORDER\n2.POST-ORDER\n3.IN-ORDER\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			b1.Pre_order(root);
			break;
		case 2:
		    b1.Post_order(root);
			break;
		case 3:
		    b1.In_order(root);
			break;
		default:
		    cout<<"ERROR";			
	        break;
}
 	cout<<"WHICH DATA YOU WANT TO SEARCH ?";
	 cin>>search;
	 b1.search_recursively(search);	
	 int del;
	 cout<<"\nWHICH DATA YOU WANT TO DELETE ?";
	 cin>>del;
	 b1.deletenode(del);
	 break;
	 
	 case 2:
	cout<<"HOW MANY NODES YOU WANT TO INSERT ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n;
		b1.Insert(n);
	}
//	int choice;
	cout<<"FROM WHICH TRAVERSAL YOU WANT TO TRAVERSE? \n1.PRE-ORDER\n2.POST-ORDER\n3.IN-ORDER\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			b1.Pre_order(root);
			break;
		case 2:
		    b1.Post_order(root);
			break;
		case 3:
		    b1.In_order(root);
			break;
		default:
		    cout<<"ERROR";			
	        break;
}
 	cout<<"WHICH DATA YOU WANT TO SEARCH ?";
	 cin>>search;
	 b1.Search(search);
	 //int del;
	 cout<<"\nWHICH DATA YOU WANT TO DELETE ?";
	 cin>>del;
	 b1.deletenode(del);
	 break;
	}
}
