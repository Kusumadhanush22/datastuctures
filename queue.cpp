//Implementation of queue using array.
/*
    1.enqueue
    2.dequeue
    3.display
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int f=-1,r=-1;
int enqueue(int arr[],int n);
int deque(int arr[],int n);
void display(int arr[]);
void front(int arr[],int f);
int main()
{
    int n;
    cout<<"enter size of the queue";
    cin>>n;
    int arr[n];
    while(1)
    {
        int ch;
        cout<<"enter any choice";
        cout<<"1.enqueue \t 2.dequeue \t 3.display \t default.exit ";
        cin>>ch;
        switch(ch)
        {
            case 1:r=enqueue(arr,n);break;
            case 2:f=deque(arr,n);break;
            case 3:display(arr);break;
            default:exit(0);
        }
    }
}
int enqueue(int arr[],int n)
{
    int ele;
    int *ptr=&f;
    if(r<n-1)
    {
        if(f==-1)
        {
            *ptr=0;
            cout<<"f="<<f<<endl;
        }
        r=r+1;
        cin>>ele;
        arr[r]=ele;
    }
    else
    {
       cout<<"stack overflow"<<endl;
        
    }
    return r;
}
int deque(int arr[],int n)
{
    if(f==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    if(f>r)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        f=f+1;
        return f;
        
    }
    
}    
void display(int arr[])
{
    if(r==-1 || f==-1)
    {
        cout<<"Queue is empty or underflow"<<endl;
    }
    else
    {
        if(f>r)
        {
            cout<<"Queue is overflow"<<endl;
        }
        else
        {
            for(int i=f;i<=r;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
        
    }
}
void front(int arr[],int f)
{
    if(f==-1)
    {
        cout<<"Queue is empty or underflow"<<endl;
    }
    cout<<arr[f]<<endl;
}