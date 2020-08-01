/*Implementation circular queue using array.
    1.enqueue
    2.dequeue
    3.display
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int f=-1,r=-1;
void enqueue(int arr[],int n);
void dequeue(int arr[],int n);
void display(int arr[],int n);
int main()
{
    int n;
    cout<<"enter the size of the queue"<<endl;
    cin>>n;
    int a[n];
    while(1)
    {
        int ch;
        cout<<"enter any choice "<<endl;
        cout<<"1.enqueue\n2.dequeue\n3.display\ndeflaut.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:enqueue(a,n);break;
            case 2:dequeue(a,n);break;
            case 3:display(a,n);break;
            default:exit(0);
        }
    }
}
void enqueue(int arr[],int n)
{
    
    int ele;
    int* ptr;
    ptr=&f;
    if((r+1)%n==f || (r+1==n && f==0))
    {
        cout<<"Queue is full"<<endl;
    }
    else if(f==-1 )
    {
        *ptr=f+1;
        r=0;
        cout<<"enter the element"<<endl;
        cin>>ele;
        cout<<"the r value="<<r<<endl;
        arr[r]=ele;
    }
    else if(r==n-1)
    {
        r=0;
        cout<<"enter the element"<<endl;
        cin>>ele;
        arr[r]=ele;
    }
    else
    {
        r=r+1;
        cout<<"enter element"<<endl;
        cin>>ele;
        cout<<"The r value="<<r<<endl;
        arr[r]=ele;
    }
}
void dequeue(int arr[],int n)
{
    if(f==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        f=f+1;
    }
}
void display(int arr[],int n)
{
    int front=f,rear=r;
    if(f==-1)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"The elements in the queue are"<<endl;
    if(front<=rear)
    {
        while(front<=rear)
        {
            cout<<arr[front];
            front=front+1;
        }
        cout<<endl;
    }
    else
    {
        while(front<=n-1)
        {
            cout<<arr[front];
            front=front+1;
        }
        front=0;
        while(front<=rear)
        {
            cout<<arr[front];
            front=front+1;
        }
        cout<<endl;
    }    
}