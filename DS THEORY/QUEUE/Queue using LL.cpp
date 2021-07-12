#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node*next;
};
class Queue
{
	Node*front;
	Node*rear;
	public:
		Queue()
		{
			front=rear=NULL;
		}
		void Enqueue(int x)
		{
		    Node*new_node=new Node;
			new_node->data=x;
			new_node->next=NULL; 
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
        void Dequeue()
        {
        	Node*temp=front;
        	front=front->next;
        	delete temp;
		}
        void display()
        {
        	Node*temp;
        	temp=front;
        	while(temp!=NULL)
        	{
        		cout<<temp->data;
        		temp=temp->next;
			}
		}
        
	
};
int main()
{
	Queue obj;
	obj.Enqueue(5);
	obj.Enqueue(7);
	obj.display();
//	cout<<"AFTER DELETING :";
//	obj.Dequeue();
//	obj.display();
}
