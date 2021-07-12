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
	int index;
	cout<<"Enter the index position to find";
	cin>>index;
	int index_data=obj.GetNth(obj.head,index);
	cout<<"THE DATA IS ="<<index_data;
}
