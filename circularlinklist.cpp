#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }

};
void insertathead(node* &head,int val){
    node* n=new node(val);
    
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertattail(node* &head,int val){
     
     if(head==NULL){
        insertathead(head,val);
        return;
    }


    node* n=new node(val);
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
        
        }
        temp->next=n;
        n->next=head;


}
void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=NULL);{
    cout<<endl;
    }
    
}
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    insertathead(head,6);
    display(head);

    return 0;

}
