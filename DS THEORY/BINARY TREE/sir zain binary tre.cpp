#include<iostream>
#include <iostream>
#include <string>
using namespace std;

class Node
{
	int val;
	Node* left;
	Node* right;
	Node* leaf;
	
	friend class Tree;	
};

class Tree
{
		Node* root;
		public:
			Tree()
			{
				root = NULL;
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
					root->val=key;
					root->left = NULL;
					root->right = NULL;
				}
			}
			
			void insertKey(int key, Node* leaf)
			{
				 if(leaf->left==NULL)
				{
					leaf->left = new Node;
					leaf->left->val = key;
					leaf->left->left = NULL;
					leaf->left->right = NULL;
				}
				else if(leaf->right==NULL)
				{
					leaf->right = new Node;
					leaf->right->val=key;
					leaf->right->left=NULL;
					leaf->right->right =NULL;
				}
				else
				{
					insertKey(key,leaf->left);
					
				}
				
			}
				// traversals
				void inorder() { in_order(root); }
				void preorder() { pre_order(root); }
				void postorder() { post_order(root); }
				
				void in_order(Node* leaf)
				{
					if(leaf!=NULL)
					{
						in_order(leaf->left);
						cout << leaf->val << "\t";
						in_order(leaf->right);
						
					}
				}
				
				void pre_order(Node* leaf)
				{
					if(leaf!=NULL)
					{
						cout << leaf->val <<"\t";
						pre_order(leaf->left);
						pre_order(leaf->right);
					}
				}
				
				void post_order(Node* leaf)
				{
					if(leaf!=NULL)
					{
						
						post_order(leaf->left);
						post_order(leaf->right);
						cout << leaf->val <<"\t";
					}
				}
				void count()
				{
					Node* temp;
					temp=root;
					cout<<"\n";
					cout<<"Size of tree: "<<countingnode(temp)<<endl;
				}
				
				int countingnode(Node* root)
				{
					if(root==NULL)
					{
						return 0;
					}
					else
					{
						int c=1;
						c+=countingnode(root->left);
						c+=countingnode(root->right);
						return c;
					}
				}
};
int main()
{
	Tree t;
	t.insert(15);
	t.insert(10);
	t.insert(20);
	t.insert(7);
	t.insert(9);
	t.insert(3);
	t.inorder();
//	t.count();

}
