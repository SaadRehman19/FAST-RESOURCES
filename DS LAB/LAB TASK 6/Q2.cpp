#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node*next;
	Node*previous;
	
};
class Linked_list
{
	
	Node*tail;
	public:
	Node*head;	
		Linked_list()
		{
			head=NULL;
		}
void create_node()
{
	    Node*temp;
	    Node*new_node=new Node;
	    cout<<"Enter the data in node";
	    cin>>new_node->data;
	    new_node->previous=NULL;
	    new_node->next=NULL;
	    if(head==NULL)
	    {
	         tail=head=new_node;
		}
		else
		
		{
			tail->next=new_node;
		    new_node->previous=tail;
			tail=new_node;
			 
		}
	}
		void FindCabin(Node*head)
		{
			int pos=1;int flag=0;
			Node*temp=head;
			int a;
			cout<<"Enter the data to be found";
			cin>>a;
			while(temp!=NULL)
			{
				if(a==temp->data)
				{
					cout<<"HIJACK CABIN IS FOUND AT POSITON :"<<pos;
					flag=1;
					break;
				}
				temp=temp->next;
				pos++;
			}
			
			if(flag==1)
			{
				while(temp!=head)
				{
					temp=temp->previous;
				}
				
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				cout<<endl<<"LAST MEMBER IS :"<<temp->data;
			}
			if(flag!=1)
			{
				cout<<"HIJACK CABIN NOT FOUND";
			}
		}
	
	int GetNth(Node*head,int x)
	{
		Node*temp=head;
		int a;
		int flag=0;
		int loc=0;
		while(temp!=NULL)
		{
			if(loc==x)
			{
			    a=temp->data;	
				flag=1;
			}
			loc++;
			temp=temp->next;
		}
		if(flag==0)
		{
			cout<<"DATA OF GIVEN INDEX NO NOT FOUND!!";
		}
		return a;
	}
	void display()
	{
		Node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}		
	
};
int main()
{
	Linked_list obj;
	cout<<"HOW MANY NODE ?";
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
	obj.create_node();	
	}
	obj.display();
	obj.FindCabin(obj.head);
	
}
