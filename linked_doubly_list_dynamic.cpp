#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node* prev;
    Node* next;

    Node(int num)
    {
        this->num=num;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head,Node *&tail,int num)
{
    Node *newNode=new Node(num);

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }

    else
    {
        tail->next=newNode;
        tail->next->prev=tail;
        tail=tail->next;
    }
}

void print_linked_list(Node *head)
{
    Node *t=head;

    while(t!=NULL)
    {
        cout<<t->num<<"  ";
        t=t->next;
    }

    cout<<endl<<"Reverse List"<<endl;
}

void print_reverse_list(Node *tail)
{
    while(tail!=NULL)
    {
    cout<<tail->num<<"  ";
    tail=tail->prev;
    }
}

int main()
{
    Node *head=NULL;

    Node *tail=NULL;

    while(1)
    {
        int n1;

        cin>>n1;

        if(n1==-1)
        {
            break;
        }
        insert_at_tail(head,tail,n1);
    }

    print_linked_list(head);

    print_reverse_list(tail);

}
