#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }

};

void  print_list_Normal(Node *head)

{
    Node *tmp=head;

    while(tmp!=NULL)
    {
        cout<<tmp->val<<"   ";

        tmp=tmp->next;
    }

    cout<<endl;
}

void reverse_printed_list(Node *tail)
{
    Node* t1=tail;

    while(t1!=NULL)
    {
        cout<<t1->val<<"  ";

        t1=t1->prev;
    }
}


int main()
{
    Node *head=new Node(10);

    Node *a=new Node(20);
    Node *b=new Node(30);

    //head->prev=NULL;

    head->next=a;

    a->prev=head;
    a->next=b;

    b->prev=a;

    Node *tail=b;
    //b->next=NULL;

    print_list_Normal(head);

    reverse_printed_list(tail);
}

