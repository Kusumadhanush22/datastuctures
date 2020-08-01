//Implementation of doublelinkedlist.
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
}*head,*tail;
class LinkedList
{
    public:
    LinkedList()
    {
        head=tail=NULL;
    }
    void insert();
    void deletion();
    void display();
};
void LinkedList::insert()
{
    Node* temp;
    temp=new Node;
    int ele;
    cout<<"enter the data"<<endl;
    cin>>ele;
    temp->data=ele;
    if(head==NULL)
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
//Here we can delete from head and tail....
void LinkedList::deletion()
{
    Node* temp;
    temp=new Node;
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
        temp=head;
        delete head;
        if(temp->next==NULL)
        {
            head=NULL;
        }
        else
        {
            head=temp->next;
            head->prev=NULL;
        }
        
       
    }
}
//Here also we can print from and back .
void LinkedList::display()
{
    if(head==NULL)
    {
        cout<<"The linkedList is empty"<<endl;
    }
    else
    {
        Node* temp;
        temp=new Node;
        temp=head;
        while(temp->next!=NULL)
        {
            cout<<(temp->data)<<" ";
            temp=temp->next;
        }
        cout<<(temp->data)<<endl;
    }  
}
int main()
{
    LinkedList l;
    int ch;
    while(1)
    {
        cout<<"enter any choice"<<endl;
        cout<<"1.insert \n 2.deletion 3.display \n default.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:l.insert();break;
            case 2:l.deletion();break;
            case 3:l.display();break;
            default:exit(0);
        }
    }
}