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
	void Dequeue(Queue &obj)
	{
		Q_Node*temp=front;
		if(isEmpty())
		{
			cout<<"QUEUE IS EMPTY";
		}
		else
		{
			while(temp!=NULL)
			{
				if(temp->data>0)
				{
					obj.Enqueue(temp->data);
				}
				temp=temp->next;
			}
			//	front=front->next;
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
};
int main()
{
	Queue q,obj;
    
	q.Enqueue(10); 
    q.Enqueue(-20);
    q.Enqueue(-40);
	q.Enqueue(50);
	q.Enqueue(60);
	q.Dequeue(obj); 
    obj.display();
    q.display();
    
}
