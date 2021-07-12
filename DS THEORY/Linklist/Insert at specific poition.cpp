#include<iostream>
using namespace std;
class Node;
int count=0;
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
		void insertNode_at_spec();
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
	}
	count++;
}
void Node::insertNode_at_spec()
{
	int pos;
	int loc=1;
	Node *temp;
	if(head==NULL)
	{
		cout<<"EMPTY LINKED LIST";
	}
	else
	{
	cout<<endl<<"Enter the position after you want to enter";
	cin>>pos;
	Node*new_node=new Node;
	cout<<"\nEnter the data";
	cin>>new_node->data;
	temp=head;
	if(pos>count)
	{
		cout<<"INVALID POSITION";
	}
	if(loc<pos)
	{
		temp=temp->next_add;
		loc++;
	}
     new_node->next_add=temp->next_add;
     temp->next_add=new_node;
	}

	
}

void Node::display()
{
	Node *temp;
	if(head==NULL)
	{
		cout<<"LINKED LIST IS EMPTY\n";
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
l.insertNode_at_spec();
l.display();
	
}
