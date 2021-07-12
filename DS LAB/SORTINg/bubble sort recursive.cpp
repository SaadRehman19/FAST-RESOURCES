#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
class sort
{
    public:
    node *head;
    sort()
    {
        head=NULL;
    }
    void insertnode(int val)
    {
        node *temp=new node;
        temp->next=NULL;
        temp->data=val;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            temp->next=head;
            head=temp;

        }
        
    }
    void bsort()
    {
        node *temp=head;
        node *temp2=head->next;
        bubblesort(temp,temp2);
    }
    int bubblesort(node *temp,node *temp2)
    {
        if(temp->next==NULL)
        {
            return 1;
        }
        else
        {
            if(temp2==NULL)
            {
                bubblesort(temp->next,temp->next->next);
            }
            else
            {
            
            if(temp->data>temp2->data)
            {
                int t;
            
                t=temp->data;
                temp->data=temp2->data;
                temp2->data=t;
            }
            bubblesort(temp,temp2->next);
            }
        }
        
    }
    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
            
        }
        cout<<endl;
    }
};
int main()
{
    sort    s;
    s.insertnode(3);
    s.insertnode(33);
    s.insertnode(4);
    s.insertnode(0);
    s.insertnode(44);
    s.insertnode(7);
    s.display();
    s.bsort();
    s.display();
}
