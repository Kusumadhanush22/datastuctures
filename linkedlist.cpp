//Implementation of linked list using cpp.
#include<iostream>
#include<stdlib.h>
using namespace std;
/*
    type1.we can implement linkedlist through structure and functions using c and c++
    type2.we can implement linkedlist through class and methods in c++,java,python,etc.
*/
/*Here implement we are implementing the type2because if we understand
  type2 then it is to understand type1.
*/
struct Node
{
  int data;
  Node* next;
}*head,*tail;
class LinkedList
{
  public:
  //here we are intializing head and tail to null.
  LinkedList()
  {
    head=NULL;
    tail=NULL;
    //head=tail=NULL; we can use this also.
  }
  void insert();
  void deletion();
  void display();
  void insert_pos(int pos);
};
void LinkedList::insert()
{
  int ele;
  Node* temp;
  temp=new Node;
  cout<<"enter element"<<endl;
  cin>>ele;
  temp->data=ele;
  temp->next=NULL;
  //if the linked list is empty.
  if(head==NULL)
  {
    head=tail=temp;
  }
  //otherwise we will move the tail.
  else
  {
    tail->next=temp;
    tail=temp;
  }
}
void LinkedList::display()
{
  Node* temp;
  temp=head;
  //we tail is last element and tail->next is NULL.
  if(head==NULL)
  {
    cout<<"linked list is empty"<<endl;
  }
  else
  { 
    while(temp->next!=NULL )
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
  }
}
void LinkedList::deletion()
{
  Node* temp;
  if(head==NULL)
  {
    cout<<"linked list is empty"<<endl;
  }
  else
  {
    temp=head->next;
    delete head;
    head=temp;
  }
}
void LinkedList::insert_pos(int pos)
{
  int c=1,ele;
  Node* temp=new Node;
  Node* temp1=new Node;
  cout<<"enter element "<<endl;
  cin>>ele;
  temp->data=ele;
  temp1=head;
  while(c<pos)
  {
    if(c==pos-1)
    {
      temp->next=temp1->next;
      temp1->next=temp;
      c++;
    
    }
    else
    {
      temp1=temp1->next;
      c++;
    }
  }
}
int main()
{
  LinkedList l;
  while(1)
  {
    cout<<"enter your choice"<<endl;
    cout<<"1.insert \n 2.display \n 3.deletion \n 4.insertatpos default:exit"<<endl;
    int ch,pos;
    cin>>ch;
    switch(ch)
    {
      case 1:l.insert();break;
      case 2:l.display();break;
      case 3:l.deletion();break;
      case 4:cout<<"enter any position"<<endl;
              cin>>pos;
              l.insert_pos(pos);break;
      default:exit(0);
    }
  }
}