#include<iostream>
using namespace std;
#define size 5
class Queue
{
	int front;
	int rear;
	int queue[size];
	public:
		Queue()
		{
			front=rear=-1;
		}
		int isFull()
		{
			if((rear+1)%size==front)
				return 1;
			else
			    return 0;	
		}
		int isEmpty()
		{
			if(front==-1&&rear==-1)return 1;
			else
			return 0;
		}
		void Enqueue(int data)
		{
			if(isFull())
			{
				cout<<"QUEUE IS EMPTY";
			}
			else
			{
			if(front==-1&&rear==-1)
			{
				front=rear=0;
				queue[rear]=data;
			}
			else            //this is a circular queue that's why we dont have to increment rear to enter values, using mod to insert values
 			{
			    rear=(rear + 1)%size;     /*if the array is full like rear=4;  then rear point to index 0 
			                             as (4+1)%5=0 so next element will be enter in index 0 */
				queue[rear]=data;         
			}
		}
			//cout<<queue[rear];
		}
		int Dequeue()
		{
			int temp;
			if(isEmpty())
			{
				cout<<"QUEUE IS EMPTY";
			}
			else
			{
			 if(front==rear)
			{
				front=rear=-1;
			}
			else
			{   temp=front[queue];
				front=(front+1)%size;
			}
		}
		return temp;
		}
		void display()
		{
			int i=front;
			while(i!=rear)
			{
				cout<<queue[i];
				i=(i+1)%size;
			}
			cout<<queue[i];
		}
};
int main()
{
	Queue obj;
	obj.Enqueue(7);
	obj.Enqueue(3);
	obj.Enqueue(4);
	obj.Enqueue(2);
	obj.Enqueue(1);
	obj.display();
	cout<<endl<<obj.Dequeue()<<"has been dequeue from the queue";
	cout<<"\nDATA IN QUEUE :";
	obj.display();
	obj.Enqueue(5);
	cout<<"\nAFTER ENQUEUE ONE ELEMENT :";
	obj.display();

}
