#include<iostream>
using namespace std;
class Node;
Node *head;
class Node
{
	//struct Node
	//{
		int data;
		Node *next_add;
	//};
	
	public:
		Node()
		{
			cout<<"constructor";
			head=NULL;
		}
		void insertNode(int);
		void display();
	
	
};
void Node::insertNode(int a)
{
	Node*new_node=new Node;
	new_node->data=a;
	new_node->next_add=NULL;
	cout<<head;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		head->next_add=new_node;
	}
	
}
void Node::display()
{
	if(head==NULL)
	{
		cout<<"LINKLIST IS EMPTY\n";
	}
	else
	{
		Node *temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next_add;
		}
	}
}
int main()
{
	Node l;
	l.insertNode(1);
	l.insertNode(2);
	//l.insertNode(3); adding this node will break a link between node 2, because head k next m new_node k address ajayega;
	l.display();
	
}
