// Stacks using linked list
#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

struct node*top=NULL;
void push()
{
    struct node*newnode=new node();
    int num;
    cout<<"Enter number:: ";
    cin>>num;
    newnode->data=num;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    struct node*temp=top;
    cout<<"Deleted element is:: "<<temp->data;
    top=top->next;
    free(temp);
}
void show()
{
    struct node*temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"ENter your choice ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            
            default:
            cout<<"Wrong choice entered ";
        }
    }

    return 0;
}
