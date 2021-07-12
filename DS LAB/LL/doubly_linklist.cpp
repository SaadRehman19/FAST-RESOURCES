#include<iostream>
using namespace std;
class node;
//node *head=NULL;
class node
{
	public:
	int a;
	node *next;
	node *previous;
};
class linklist
{
	public:
	node *head;
	node *tail;
	

	public:
		linklist()
		{
			head=NULL;
		}
		void insert()
		{
			node *new_node=new node;
			cout<<"enter number: ";
			cin>>new_node->a;
			new_node->next=NULL;
			if(head==NULL)
			{
				head=new_node;
				new_node->previous=NULL;
				tail=new_node;
			}
			else
			{
				node *temp;
				temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=new_node;
				new_node->previous=temp;
				tail=new_node;
			}
		}
		
		int display()
		{
			node *temp;
			temp=head;
			int n,c=0;
			
			while(temp!=NULL)
			{
				cout<<temp->a;
				
				temp=temp->next;
			}
		}
		void print_in_reverse()
		{
			node *temp;
			temp=tail;
			while(tail!=NULL)
			{
				cout<<tail->a;
				
				tail=tail->previous;
			}
		}
		void del_begin()
		{
			head=head->next;
			head->previous=NULL;
		}
		void insert_first()
		{
			node *new_node=new node;
			cout<<"enter number: ";
			cin>>new_node->a;
			new_node->next=head;
			head->previous=new_node;
			head=new_node;
			
		}
		void delete_last()
		{
			node *temp=head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=NULL;
		}
		void insert_after_position()
		{
			node *new_node=new node;
			node *temp=head;
			int n,flag=0,flag1=0;
			cout<<"\ninsert after postion";
			cout<<"\nenter postion: ";
			cin>>n;
			while(temp->next!=NULL)
			{
				if(temp->a==n)
				{
					flag=1;
					flag1=1;
					cout<<"enter number: ";
					cin>>new_node->a;
					new_node->next=temp->next;
					new_node->previous=temp;
					temp->next->previous=new_node;
					temp->next=new_node;
					break;
				}
				temp=temp->next;
			}
			if(flag==0&&temp->a==n)
			{
				flag1=1;
				cout<<"enter number: ";
				cin>>new_node->a;
				new_node->next=NULL;
				new_node->previous=temp;
				temp->next=new_node;
			}
			if(flag1==0)
			{
				cout<<"\nposition not found..";
			}
		}
		void insert_before_position()
		{
			node *new_node=new node;
			node *temp=head;
			int n,flag=0;
			cout<<"\ninsert before postion";
			cout<<"\nenter postion: ";
			cin>>n;
			if(temp->a==n)
				{
					cout<<"enter number: ";
					cin>>new_node->a;
					new_node->previous=NULL;
					new_node->next=temp;
					temp->previous=new_node;
					head=new_node;
				}
			while(temp->next!=NULL)
			{
				if(temp->next->a==n)
				{
					flag=1;
					cout<<"enter number: ";
					cin>>new_node->a;
					new_node->next=temp->next;
					new_node->previous=temp;
					temp->next->previous=new_node;
					temp->next=new_node;
					break;
				}
				temp=temp->next;
			}
			if(flag==0)
			{
				cout<<"position not found...";
			}
		}
		void delete_position_data()
		{
			node *temp=head;
			int n,flag=0,flag2=0;
			cout<<"enter postion: ";
			cin>>n;
			
				if(temp->a==n)
				{
					head=temp->next;
					temp->next->previous=NULL;
					flag=1;
					temp=head;
				}
				
			
			while(temp->next!=NULL)
			{
				
				if(temp->next->a==n)
				{
					flag=2;
					temp->next=temp->next->next;
					temp->next->next->previous=temp;
				}
				/*if(flag!=2)
				{
					temp=temp->next;
				}*/
				temp=temp->next;
			}
			
			if(flag==0)
			{
				cout<<"\nposition not found..";
			}
		}
		void delete_specific_node()
		{
			int pos,count=0,i=1;
			node *temp;
			temp=head;
			cout<<"\nenter the position to delete";
			cin>>pos;
			while(temp!=NULL)
			{
				temp=temp->next;
				count++;
			}
			temp=head;
			if(pos==1)
			{
				del_begin();
			}
			 if(pos==count)
			{
				delete_last();
			}
			else
			{
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				temp->next=temp->next->next;
			}
			
		}
	void reverse()
	{
		node *t1=NULL,*t2=NULL;
		tail=head;
		while(head!=NULL)
		{
			t2=head->next;
			head->next=t1;
			t1=head;
			head=t2;
		}
		head=t1;
	}
	private:
		void copying(int b)
		{
			node *temp=head;
			node *new_node=new node;
			new_node->next=NULL;
			new_node->a=b;
			if(head==NULL)
			{
				head=new_node;
				tail=new_node;
			}
			else
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=new_node;
				new_node->previous=temp;
				tail=new_node;
				
			}
			
		}
		public:
	linklist copy( linklist &obj)
	{
		obj.head=NULL;
		node *temp=head;
		while(temp!=NULL)
		{
			obj.copying(temp->a);
			temp=temp->next;
		}
		return obj;
	}
	void swap()
	{
		node *temp=head,*p1,*p2,*r1,*r2;
		int b,flag;
		int c;
		cout<<"enter two number for swap:\n";
		cin>>b>>c;
		
			while(temp->next!=NULL)
			{
				
				if(temp->next->a==b)
				{
					
					p1=temp;
					p2=temp->next;
					
				}
				temp=temp->next;
			}
		temp=head;
		
		while(temp->next!=NULL)
		{
			if(temp->next->a==c)
			{
				r1=temp;
				r2=temp->next;
				
			}
			temp=temp->next;
		}			
		

			p1->next=r2;
			r2->previous=p1;
			r1->next=p2;
			p2->previous=r1;
			node *s;
			s=r2->next;
			r2->next=p2->next;
			p2->next=s;
			
			r2->next->previous=r2;
			if(p2->next!=NULL)
			{
				p2->next->previous=p2;
			}
		}
		
		void check_palindrome_compare(node *h)
		{
			int flag=0;
			node *temp=head;
			node *temp2=h;
			//cout<<temp->a;
			//cout<<temp2->a;
			while(temp!=NULL &&temp2!=NULL)
			{
				if(temp->a==temp2->a)
				{
					flag=1;
				
				}
				else
				{
					flag=0;
					break;
				}
				temp=temp->next;
				temp2=temp2->next;
			}
			if(flag==1)
			{
				cout<<"\nlinklist are palindrome";
			}
			else
			{
				cout<<"\nlinklist are not palindrome";
			}
		}
	void swap_start_two_nodes()
	{
		
		/*node *p=head;
		node *q=tail,*r;
		r=p;
		p=q;
		q=r;
		q->next=NULL;
		q->previous=p;
		p->previous=NULL;
		p->next=q;
		*/
		node *p=head,*q=tail;
		q->next=p->next;
		p->next=NULL;
		p->previous=q->previous;
		q->previous=NULL;
		q->next->previous=q;
		p->previous->next=p;
		head=q;
		tail=p;
	}
	void chk_adjacent()
	{
		int b,c;
		node *temp=head,*t1,*t2;
		cout<<"enter two data:\n";
		cin>>b>>c;
		while(temp!=NULL)
		{
			if(temp->a==b)
			{
				t1=temp;
				break;
			}
			temp=temp->next;
		}
		temp=temp->next;
		while(temp!=NULL)
		{
			if(temp->a==c)
			{
				t2=temp;
				break;
			}
			temp=temp->next;
		}
		
		if(t1->next==t2 && t2->previous==t1)
		{
			cout<<"nodes are adjacent..";
		}
		
	}
		
		
};

int main()
{
	linklist l1,l2;
	
	for(int i=0;i<5;i++)
	{
		l1.insert();	
	}
	
	//n1.delete_specific_node();
	//n1.insert_before_position();
	//l1.reverse();
	//l1.display();
	//l1.swap_start_two_nodes();
	
	//l2=l1.copy(l2);
	//l1.display();
	l1.chk_adjacent();
//	l1.swap();
	//l2=l1.copy(l2);
	//l1.reverse();
	//l1.check_palindrome_compare(l2.head);
//	l1.display();
	//l1.print_in_reverse();
	
	//l1.display();
	
	//l1.check_palindrome_compare(l2.head);

	
	
	
}
