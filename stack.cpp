//Implementation of stack in cpp.
//here stack is implemented using array.
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
vector<int>v1;
int top;
int push(int top);
int pop(int top);
int display(int top);
int main()
{
    top=-1;
    
    int ch;
    while(1)
    {
        cout<<"enter the choice"<<endl;
        cout<<"1.push \n 2.pop \n 3.display \n default.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:top=push(top);break;
            case 2:top=pop(top);break;
            case 3:display(top);break;
            default:exit(0);
        }
    }
}
int push(int top)
{
    cout<<"enter the element"<<endl;
    int k;
    cin>>k;
    v1.push_back(k);
    top=top+1;
    return top;
}
int pop(int top)
{
    if(top==-1)
    {
        cout<<"enter stack is underflow"<<endl;
    }
    else
    {
        v1.pop_back();
        top=top-1;
    }
    return top;
}
int display(int top)
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}
