#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
};
class Linked_list
{
	private:
		Node *head;
		Node *tail;
		public:
			Linked_list()
			{
				head=NULL;
			}
void insert()
		{
			Node *new_node=new Node;
			cout<<"enter number: ";
			cin>>new_node->data;
			new_node->next=NULL;
			if(head==NULL)
			{
				head=new_node;
				new_node->prev=NULL;
				tail=new_node;
			}
			else
			{
				
				tail->next=new_node;
				new_node->prev=tail;
				tail=new_node;
			}
		}
void display()
{
	Node*temp;
	if(head==NULL)
	{
		cout<<"\nLINKED LIST IS EMPTY";
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
}
void selection_sort()
{
	Node *temp1,*p,*q,*r;
	Node *temp2;
	int a,flag=0;
	temp1=head;
	while(temp1!=NULL)
	{
		p=temp1;
		temp2=temp1->next;
		while(temp2!=NULL)
		{
			if(p->data > temp2->data)
			{
				p=temp2;
			}
			temp2=temp2->next;
		}
		/*if(temp1==head)
		{
			if(p->next==NULL)
			{
				q=temp1->next;
				q->prev=p;
				p->prev->next=temp1;
				temp1->next=NULL;
				temp1->prev=p->prev;
				p->prev=NULL;
				p->next=q;
				Node *s;
				s=head;
				head=tail;
				tail=s;
			}
			else
			{
				q=temp1->next;
				temp1->next->prev=p;
				p->prev->next=temp1;
				temp1->next=p->next;
				p->next->prev=temp1;
				temp1->prev=p->prev;
				p->prev=NULL;
				p->next=q;
				head=p;
			}
			
		}
		
		else
		{
			if(p->next==NULL)
			{
				q=temp1->next;
				r=temp1->prev;
				
				temp1->next->prev=p;
				p->prev->next=temp1;
				
				temp1->next=NULL;
				temp1->prev=p->prev;
				p->prev=r;
				r->next=p;
				p->next=q;
				tail=temp1;
			}
			else //if(temp1!=head && p->next!=NULL)
			{
				q=temp1->next;
				r=temp1->prev;
				
				temp1->next->prev=p;
				p->prev->next=temp1;
				
				temp1->next=p->next;
				temp1->prev=p->prev;
				p->prev=r;
				r->next=p;
				p->next=q;
			}
		}*/
	    temp1=swap(temp1,p);
	}
}

Node *swap(Node *temp1 ,Node *p)
{
	Node *q,*r;
	if(temp1->data > p->data)
	{
		if(temp1==head)
		{
			if(p->next==NULL)
			{
				q=temp1->next;
				q->prev=p;
				p->prev->next=temp1;
				temp1->next=NULL;
				temp1->prev=p->prev;
				p->prev=NULL;
				p->next=q;
				Node *s;
				s=head;
				head=tail;
				tail=s;
			}
			else
			{
				q=temp1->next;
				temp1->next->prev=p;
				p->prev->next=temp1;
				temp1->next=p->next;
				p->next->prev=temp1;
				temp1->prev=p->prev;
				p->prev=NULL;
				p->next=q;
				head=p;
			}			
		}
		
		else
		{
			if(p->next==NULL)
			{
				q=temp1->next;
				r=temp1->prev;
				
				temp1->next->prev=p;
				p->prev->next=temp1;
				
				temp1->next=NULL;
				temp1->prev=p->prev;
				p->prev=r;
				r->next=p;
				p->next=q;
				tail=temp1;
			}
			else if(temp1!=head && p->next!=NULL)
			{
				q=temp1->next;
				r=temp1->prev;
				
				temp1->next->prev=p;
				p->prev->next=temp1;
				
				temp1->next=p->next;
				temp1->prev=p->prev;
				p->prev=r;
				r->next=p;
				p->next=q;
			}
		}
		return p->next;
	}
	else
	{
		return temp1->next;
	}
}

/*void swap(Node *p2,Node *r2)
	{
		int flag=0;
		Node *temp=head,*p1=p2->prev,*r1=r2->prev,*q;
		if(p2==head && flag==0)
		{
			flag=1;
			if(r2->next==NULL)
			{
				q=p2->next;
				q->prev=r2;
				r2->prev->next=p2;
				p2->next=NULL;
				p2->prev=r2->prev;
				r2->prev=NULL;
				r2->next=q;
				q->prev=r2;
				
				Node *s;
				s=head;
				head=tail;
				tail=s;
			}
			if(r2->next!=NULL)
			{
				if(p2->next==r2->prev)
				{
					q=r2->next;
					
					head=r2;
					r2->prev=NULL;
					p2->next=q;
					p2->prev=r2;
					head->next=p2;
					q->prev=p2;
				}
				else
				{
					q=r2->next;
					head=r2;
					r2->prev=NULL;
					r2->next=p2->next;
					p2->next->prev=r2;
					p2->next=q;
					p2->prev=r1;
					q->prev=p2;
				}
			}
		}
		else
		{
			p1->next=r2;
			r2->prev=p1;
			r1->next=p2;
			p2->prev=r1;
			Node *s;
			s=r2->next;
			r2->next=p2->next;
			p2->next=s;
			
			r2->next->prev=r2;
			if(p2->next!=NULL)
			{
				p2->next->prev=p2;
			}
		}	
	}*/

};

int main()
{
	Linked_list l1;
	int node;
	cout<<"Enter how many node: ";
	cin>>node;
	for(int i=0;i<node;i++)
	{
	l1.insert();	
	}
	l1.selection_sort();
	l1.display();
}
