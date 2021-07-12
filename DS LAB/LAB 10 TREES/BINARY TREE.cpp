#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node*left;
		Node*right;
	
};
class BinaryTree
{
	Node*root;
	public:
		BinaryTree()
		{
			root=NULL;
		}
	void insert(int key)
			{
				if(root !=NULL)
				{
					insertKey(key, root);
					
				}
				else
				{
					root = new Node;
					root->data=key;
					root->left = NULL;
					root->right = NULL;
				}
			}
			
			void insertKey(int key, Node* leaf)
			{
				 if(leaf->left==NULL)
				{
					leaf->left = new Node;
					leaf->left->data = key;
					leaf->left->left = NULL;
					leaf->left->right = NULL;
				}
				else if(leaf->right==NULL)
				{
					leaf->right = new Node;
					leaf->right->data=key;
					leaf->right->left=NULL;
					leaf->right->right =NULL;
				}
				else
				{
					insertKey(key,leaf->left);
					
				}
			}
				void inorder() { in_order(root); }
				void preorder() { pre_order(root); }
				void postorder() { post_order(root); }
				
				void in_order(Node* root)
				{
					if(root!=NULL)
					{
						in_order(root->left);
						cout << root->data << "\t";
						in_order(root->right);
						
					}
				}
				void pre_order(Node* leaf)
				{
					if(root!=NULL)
					{
						cout <<root->data <<"\t";
						pre_order(root->left);
						pre_order(root->right);
					}
				}
				void post_order(Node* root)
				{
					if(root!=NULL)
					{
						post_order(root->left);
						post_order(root->right);
						cout <<root->data <<"\t";
					}
				}
				void search(int key)
				{
					Node*temp=root;
					searchNode(temp,key);
				}
				void searchNode(Node*temp,int key)
				{
				
					if(temp!=NULL)
					{
					 if(temp->data==key)
					{
						cout<<"DATA HAS BEEN FOUND :"<<key;
						return;
					}
					else
					{
						searchNode(temp->left,key);
						searchNode(temp->right,key);
					}
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
	void deletion(Node*&root,int data)
	{
		
					if(root->left==NULL &&root->right==NULL&&root->data==data)
					{
						delete root;
						root=NULL;
					}
					
						else if(root->left==NULL&&root->data==data)
						{
							Node *temp;
							temp=root;
							root=root->right;
							delete temp;
						//	return;
						}
						else if(root->right==NULL&&root->data==data)
						{
							Node *temp;
							temp=root;
							root=root->left;
							delete temp;
						//	return;
						}
						else
						{
							if(root->left!=NULL)
							{
								deletion(root->left,data);
							}
							else if(root->right!=NULL)
							{
								deletion(root->right,data);
							}
						else
						{
							Node *temp=findmin(root->left);
							root->data=temp->data;
							deletion(root->left,temp->data);
						}
						}
						
				}
				//return;
			
	
};
int main()
{
	BinaryTree b1;
	int n,a;
	cout<<"ENTER HOW MANY NODES YOU WANT TO INSERT IN BINARY TREE :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		b1.insert(a);
	}
	cout<<"ENTER WHICH TRAVERSAL YOU WANT TO TRAVERSE :n1.PRE-ORDER\n2.POST-ORDER\n3.IN-ORDER\n";
	int choice;cin>>choice;
	switch(choice)
	{
		case 1:
			b1.preorder();
			break;
		case 2:
		    b1.postorder();
			break;
		case 3:
		    b1.inorder();
			break;
		default:
		    cout<<"ERROR";			
	        break;
	}
	int search;
	cout<<"ENTER DATA YOU WANT TO SEARCH ";
	cin>>search;
	b1.search(search);
	cout<<"\n data you want to delete";
	int del;
	cin>>del;
	b1.deletenode(del);
	
	b1.inorder();
	
	
}
