/*
    Implementation of the queue using linked list.
    enqueue is for inserting a element.
    dequeue is for deleting a element.
    display is for printing the elements.
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
}*front,*rear;
class Queue
{
    public:
    Queue()
    {
        front=rear=NULL;
    }
    void enqueue();
    void dequeue();
    void display();
};
void Queue::enqueue()
{
    int ele;
    Node* temp;
    temp=new Node;
    cout<<"insert the value"<<endl;
    cin>>ele;
    temp->data=ele;
    temp->next=NULL;
    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        
        rear->next =temp;
        rear=rear->next;
    }    
}
void Queue::dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        Node* temp;
        temp=front;
        front=front->next;
        delete temp;
    }
}
void Queue::display()
{
    if(front==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        Node* temp;
        temp=front;
        while(temp->next!=NULL)
        {
            cout<< temp->data;
            temp=temp->next;
        }
        cout<<temp->data;
    }
    
}
int main()
{
    Queue q1;
    while(1)
    {
        int ch;
        cout<<"enter any choice"<<endl;
        cout<<"1.enqueue \n 2.dequeue \n 3.display\n default.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:q1.enqueue();break;
            case 2:q1.dequeue();break;
            case 3:q1.display();break;
            default:exit(0);
        }
    }
}
