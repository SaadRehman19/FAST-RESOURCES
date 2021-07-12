#include<iostream>
using namespace std;
class Q_Node
{
	public:
	int data;
	Q_Node*next;
};
class Queue
{
	public:
	Q_Node *front;
	Q_Node *rear;
	public:
		Queue()
		{
			front=rear=NULL;
		}
		void Enqueue(int x)
		{
			Q_Node*new_node=new Q_Node;
			new_node->next=NULL;
			new_node->data=x;
			if((front&&rear)==NULL)
			{
			front=rear=new_node;
		}
		else
		{
			rear->next=new_node;
			rear=new_node;
		}
	}
	int isEmpty()
	{
		if((front&&rear)==NULL)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	void display()
	{
		Q_Node*temp=front;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	void Display_reverse(Q_Node*front)
	{
		if(front!=NULL)
		{
			Display_reverse(front->next);
			cout<<front->data<<endl;
		}
	}
};
int main()
{
	Queue q;
	q.Enqueue(10);
    q.Enqueue(30); 
    q.Enqueue(40); 
   
   cout<<"\nDATA IN QUEUE :\n";q.display();
   cout<<endl<<"DATA IN REVERSE ORDER :\n";q.Display_reverse(q.front);   
}
