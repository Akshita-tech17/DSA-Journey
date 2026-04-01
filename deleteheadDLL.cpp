#include<stdio.h>
#include<stdlib.h>
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value){
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }   
};
Node*deletehead(Node*head){
    if (head==NULL){
        return NULL;
    }
    if (head->next==NULL){
        delete head;
        return NULL;
    }
    Node*temp=head;
    if (temp!=NULL){
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
    }