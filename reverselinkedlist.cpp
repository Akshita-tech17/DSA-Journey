#include<iostream>
using namespace std ;

class Node{
    public :
     int data ;
     Node*next;
     
    Node( int value ){
        this->data=value;
        this->next=NULL;
    }
};
void reverseLL(Node*&head){
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=curr;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}
Node*prev=NULL;

void recursive_reverse(Node*&head,Node*curr,Node*prev){
    if (curr==NULL){
        head=prev;
        return ;
    }
    Node*forward=curr->next;
    recursive_reverse(head,forward,curr);
    curr->next=prev;
}
Node*reverse1(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    recursive_reverse(head,curr,prev);
    return head;
}

Node* reverse2(Node*&head){
    //base case agar nulll list h ya single element hai to 
    if(head==NULL ||head->next==NULL){
        return head;
    }
    Node*chotahead=reverse2(head->next);
    // Node*chotahead=head->next;
    // reverse2(chotahead);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}
void printll(Node*head){
    Node*temp= head ;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main (){
    Node*newnode=new Node(3);
    Node*newnode2=new Node(5);
    Node*newnode3=new Node(7);
    Node*newnode4=new Node(9);
    Node*newnode5=new Node(11);
    newnode->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;
    newnode4->next=newnode5;
    newnode5->next=NULL;
    Node*head=newnode;
    printll(head);
    cout<<endl;
    // Node* reverseLL=reverse1(head);
    // printll(reverseLL);
    Node* reverseLL=reverse2(head);
    printll(reverseLL);
}

