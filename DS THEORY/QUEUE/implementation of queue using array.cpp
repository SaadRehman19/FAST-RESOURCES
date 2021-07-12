#include<iostream>
using namespace std;
#define size 5
class Queue
{
    	int queue[size];
    	int front;
    	int rear;
    	public:
    		Queue()
    		{
    			front=rear=-1;
			}
			void Enqueue(int data)
			{  
			 if(rear==size-1)
			    {
			    	cout<<"QUEUE IS FULL";
				}
				else if(front==-1&&rear==-1)
				{
					front=rear=0;
					queue[rear]=data;
				}
				else
				{
					rear++;
                    queue[rear]=data;
				}
			}
			void Dequeue()
			{
				if(front==-1&&rear==-1)
				{
					cout<<"QUEUE IS EMPTY";
				}
				else if(front==rear)
				{
					front=rear=-1;
				}
				else//else if(!(front&&rear)==-1)
				{
					front++;
				}
			}
            void display()
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<queue[i]<<endl;
                }
            }
    		
};
int main()
{
	Queue obj;
	obj.Enqueue(5);
	obj.Enqueue(9);
	obj.display();
	obj.Dequeue();
	obj.display();
}
