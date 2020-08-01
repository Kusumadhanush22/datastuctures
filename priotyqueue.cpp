//Implementation prioty queue using Linked List.
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Node
{
    int data;
    int pri;
    Node* next;
}*head,*tail;
class PriorityQueue
{
    public:
    PriorityQueue()
    {
        head=tail=NULL;
    }
    void enqueue();
    void dequeue();
    void display();
    void sort();
};
void PriorityQueue::enqueue()
{
    Node *temp;
    temp=new Node;
    int ele,p;
    cout<<"enter the element and priority "<<endl;
    cin>>ele;
    cin>>p;
    temp->data=ele;
    temp->pri=p;
    temp->next=NULL;
    if(head==NULL)
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=tail->next;
    } 
}
void PriorityQueue::dequeue()
{
    Node* temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        head=head->next;
        delete temp;
    }
}
void PriorityQueue::display()
{
    Node* temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"data\t pri"<<endl;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<"\t";
            cout<<temp->pri<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<"\t";
        cout<<temp->pri<<endl;
        temp=NULL;
    }
}
void PriorityQueue::sort()
{
    Node *i,*j;
    i=head;
    
    while(i!=NULL)
    {
        j=i->next;
        while(j!=NULL)
        {
            Node *k;
            k=new Node;
            if(i->pri > j->pri)
            {
                k->data=i->data;
                i->data=j->data;
                j->data=k->data;
                k->pri=i->pri;
                i->pri=j->pri;
                j->pri=k->pri;
            }
            j=j->next;
        }
        i=i->next;
    }
}
int main()
{
    PriorityQueue p;
    while(1)
    {
        int ch;
        cout<<"enter any choice "<<endl;
        cout<<"1.enqueue\n2.dequeue\n3.display\n4.sort\ndefault:exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:p.enqueue();break;
            case 2:p.dequeue();break;
            case 3:p.display();break;
            case 4:p.sort();break;
            default:exit(0);
        }
    }
}
