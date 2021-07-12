#include<iostream>
using namespace std;
class node;
//node *head=NULL;
class node
{
	public:
	int a;
	node *next;
};
class linklist
{
	public:
	node *head;

	public:
		linklist()
		{
			head=NULL;
		}
		void insert()
		{
			node*temp;
			node *new_node=new node;
			cout<<"enter number: ";
			cin>>new_node->a;
			new_node->next=NULL;
			if(head==NULL)
			{
				head=temp=new_node;
			}
			else
			{
			temp->next=new_node;
			temp=new_node;	
			}
		}
		
		int display()
		{
		node*temp;
	if(head==NULL)
	{
		cout<<"\nLINKED LIST IS EMPTY";
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->a;
			temp=temp->next;
		}
	}
}
		void del_begin()
		{
			head=head->next;
		}
		void insert_first()
		{
			node *new_node=new node;
			cout<<"enter number: ";
			cin>>new_node->a;
			new_node->next=head;
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
					new_node->next=temp;
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
					flag=1;
					temp=head;
				}
				
			
			while(temp->next!=NULL)
			{
				
				if(temp->next->a==n)
				{
					flag=2;
					temp->next=temp->next->next;
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
			}
			else
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=new_node;
				
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
		if(temp->a==b)
		{
			p1=head;
			p2=head->next;
			flag=1;
		}
		else
		{
			while(temp->next!=NULL)
			{
				
				if(temp->next->a==b)
				{
					p1=temp;
					p2=temp->next;
				}
				temp=temp->next;
			}
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
		if(flag==1)
		{
			head=r2;
			r1->next=p2;
			node *s;
			s=head->next;
			head->next=p2->next;
			p2->next=s;
			
		}
		else
		{
			p1->next=r2;
			r1->next=p2;
			node *s;
			s=r2->next;
			r2->next=p2->next;
			p2->next=s;
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
				cout<<"\nboth linklist are not palindrome";
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
	
	l1.display();
}
