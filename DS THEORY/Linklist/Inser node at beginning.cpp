#include<iostream>
using namespace std;
class Node;
Node *head=NULL;
class Node
{
		int data;
		Node *next_add;
	public:
		//Node()   There is no need to create constructor, becauase everytime new value is inserted, head will have a value of NULL which whill break the link;
	//	{
	//		cout<<"constructor";
	//		head=NULL;
	//	}
		void insertNode();
		void display();
		void insertNode_at_beg();
		void insertNode_at_end();
	
	
};
void Node::insertNode()
{
	Node *temp;
	Node*new_node=new Node;
	cout<<"Enter the data in node\n";
	cin>>new_node->data;
	new_node->next_add=NULL;
	//cout<<head;
	if(head==NULL)
	{
		head=temp=new_node;
	}
	else
	{
		
		temp->next_add=new_node;
		temp=new_node;
		//is me hm while k condition s bhi krskte hn jahan temp ka next address null hojayega wo loop k bahar ajyega.
	/*	while(temp->next_add!=NULL)
		{
			
			temp=temp->next_add;
		}
		temp->next_add=new_node;*/
	}
	
}
void Node::insertNode_at_beg()
{
	Node*new_node=new Node;
	cout<<endl<<"Enter data to insert at beginning";
	cin>>new_node->data;
	new_node->next_add=head;
	head=new_node;
}
void Node::insertNode_at_end()
{
	if(head==NULL)
	{
		cout<<"LINKED LIST IS EMPTY";
	}
	else
	{
		Node*temp;
		Node*n_node=new Node;
		cout<<endl<<"Enter data to enter at end of the node";
		cin>>n_node->data;
		n_node->next_add=NULL;
		temp=head;
		while(temp->next_add!=NULL)
		{
			temp=temp->next_add;
		}
		temp->next_add=n_node;
		
	}
}
void Node::display()
{
	Node *temp;
	if(head==NULL)
	{
		cout<<"LINKLIST IS EMPTY\n";
	}
	else
	{
		
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next_add; 
		}
	}
	if(temp==NULL)
	{
		cout<<"\nLINK LIST COMPLETED";
	}
}
int main()
{
	Node l;
	l.insertNode();
	l.insertNode();
	l.insertNode();
	l.display();
	l.insertNode_at_beg();
	l.display();
	l.insertNode_at_end();
	l.display();
	
}
