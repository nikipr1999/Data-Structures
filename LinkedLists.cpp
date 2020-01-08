

//Implemented linked list

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//list node
struct node
{    int info;
    struct node *next;
};

node *head=NULL,*tail=NULL;

//function to create a new node
node *getnode(int data)
{
    node *newnode= new node();
    newnode->info=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
}

//function to Display the linked list
void display(struct node *start)
{
    while(start!=NULL)
    {
        cout<<start->info<<"    ";
        start=start->next;
    }
    cout<<"\n";
}
// function to delete first node
void delete_first()
{
    node *tmp=new node();
    tmp=head;
    head=head->next;
    delete tmp;

}

void delete_last(struct node *ptr)
{
    node *tmp=new node();
    node *prev=new node();

    while(ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
        tmp=ptr;
    }
    delete tmp;
    prev->next=NULL;

}
void delete_pos(int pos,struct node *ptr)
{
    node *tmp=new node();
    node *prev=new node();
    for(int i=0;i<pos-1;i++)
    {
        prev=ptr;
        ptr=ptr->next;
        tmp=ptr;
    }
        prev->next=tmp->next;
        delete tmp;
}

//driver code
main()
{
    int size=0;
    int p;
    cout<<"enter no. of elements to be inserted=";
    cin>>p;
    for(int i=0;i<p;i++)   //inserting elements in the list
    {
     int n;
     cout<<"enter element to be inserted= ";
     cin>>n;
     getnode(n);
     }
    cout<< "\nThe List is : ";
    display(head);
    delete_first();

    cout<<"\nList after deleting the first node :";
    display(head);
    delete_last(head);
    cout<<"\n List after deleting the last node : ";
    display(head);
    cout<<"\nLet's delete an element at some position :";
    cout<<"\nEnter pos: ";
    int position;
    cin>>position;
    delete_pos(position,head);
    cout<<"\nList after deleting the element : ";
    display(head);
    return 0;
}


