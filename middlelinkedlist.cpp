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
int getlength(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count ;
}

void middlelinkedlist(Node*&head){
    int ans=getlength(head)/2;
    int i=0;
    Node*temp=head;
    while(i<ans){
        temp=temp->next;
        i++;
    }
    cout<<"middle node is"<<temp->data;

}
Node* middle_optimised(Node*&head){
    if (head==NULL || head->next==NULL){
        return head;
    }
    if (getlength(head)==2){
        return head->next;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
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
    //middlelinkedlist(head);
    Node* mid =  middle_optimised(head);
    cout<<mid->data;
}