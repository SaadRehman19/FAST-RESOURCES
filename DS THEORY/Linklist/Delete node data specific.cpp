#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node*next_add;
};
class Linked_list
{
	private:
		Node*head;
	public:
		Linked_list()
		{
			head=NULL;
		}
		void insert_node();
		void display();
        void delete_at_beg();
		void delete_at_spec();
		void delete_position();
		//void count();
	
};
void Linked_list::insert_node()
{
	Node*temp;
	Node*new_node=new Node;
	cout<<"Enter the data in node";
	cin>>new_node->data;
	new_node->next_add=0;
	if(head==NULL)
	{
	   head=temp=new_node;
	}
	else
	{
		temp->next_add=new_node;
		temp=new_node;
	}
}
void Linked_list::delete_at_beg()
{
   /// Node*temp;
	//temp=head;
	head=head->next_add;
//	delete temp;

}
/*void Linked_list::delete_at_spec()
{
	int flag=0;
	int a;
	Node*temp,*q;
	temp=head;
	cout<<"\nEnter data to delete";
	cin>>a;
	while(temp!=NULL)
	{
		q=temp;
       if(temp->data==a)
	   {
	   	
	   	if(temp->next_add!=NULL)
	   	{
	   		flag=1;
	   		
	   	   head->next_add=temp->next_add;
	   //	   temp->next_add=NULL;
			   }	
	}
	temp=temp->next_add;
	while(temp!=NULL)
	{
	if(temp->data==a)
	{
		if(temp->next_add!=NULL)
		{
			flag=2;
			head->next_add=temp->next_add;
		}
	}

	temp=temp->next_add;
}
if(temp==NULL)
{
	flag=3;
}

}

/*	if(flag!=1&&flag!=2)
	{
		temp=temp->next_add;
		if(temp->next_add==NULL)
		{
			cout<<"s";
		}
	}*/

/*if(flag==1)
{
	if(temp->next_add==NULL)
	{
		cout<<"a";
		temp=temp->next_add;
	//	temp=temp->next_add;
	//	q=temp;
	//	temp=temp->next_add;
	}
	//q=NULL;
}*/
//}
void Linked_list::delete_position() 
		{
			Node *temp;
			temp=head;
			int n,flag=0,flag2=0;
			cout<<"enter postion: ";
			cin>>n;
			while(temp->data==n)
			{
				if(temp->data=n)
				{
					head=temp->next_add;
					flag=1;
					temp=head;
				}
				
			}
			
			while(temp->next_add!=NULL)
			{
				if(temp->next_add->data==n)
				{
					flag=2;
					temp->next_add=temp->next_add->next_add;
				}
				if(flag!=2)
				{
					temp=temp->next_add;
				}
				
			}
			if(flag==0&&temp->next_add->data==n)
			{
				flag=3;
				temp->next_add=NULL;
			}
			if(flag==0)
			{
				cout<<"\nposition not found..";
			}
			
		}

void Linked_list::display()
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
			temp=temp->next_add;
		}
	}
}
/*void Linked_list::count()
{
	int inc=0;
	Node*temp;
	int n;
	cout<<"\nEnter the data";
	cin>>n;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==n)
		{
			inc++;
		}
		temp=temp->next_add;
	}
	cout<<endl<<inc;
}*/
int main()
{
	Linked_list l;
	l.insert_node();
	l.insert_node();
	l.insert_node();
	l.insert_node();
	l.insert_node();
	l.display();
//	l.delete_at_beg();
//	cout<<"AFTER DELETE AT BEGIN\n";
//	l.display();
	l.delete_position();
	l.display();
	//l.count();
	
	
}
