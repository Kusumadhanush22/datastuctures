//Implementation of stack using linked list.
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
}*top,*head;
class Stack
{
    public:
    Stack()
    {
        top=NULL;
    }
    void push();
    void pop();
    void display();
};
void Stack::push()
{
    Node* temp;
    temp=new Node;
    int ele;
    cout<<"enter the data"<<endl;
    cin>>ele;
    temp->data=ele;
    if(top==NULL)
    {
        head=top=temp;
        
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
void Stack::pop()
{
    Node* temp;
    temp=new Node;
    temp=top;
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        top=top->next;
        delete temp;
    }
}
void Stack::display()
{
    int c=0;
   
    if(top==NULL)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        Node* temp;
        temp=new Node;
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
}
int main()
{
    Stack s;
    int ch;
    while(1)
    {
        cout<<"enter any choice "<<endl;
        cout<<"1.push \n 2.pop \n 3.display \n default.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:s.push();break;
            case 2:s.pop();break;
            case 3:s.display();break;
            default:exit(0);
        }
    }
}