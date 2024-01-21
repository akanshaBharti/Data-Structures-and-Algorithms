#include<iostream>
#include "node.h"
using namespace std;

class clist{
    private:
    node *head, *tail;
    public:
    clist(){ 
        head=tail=0;
    }
    void insertAtHead(int val); 
    void insertAtTail(int val);  
    void deleteAtHead();  
    void deleteAtTail(); 
    void display();
};

void clist ::  insertAtHead(int val){
     head=new node(val,head);
     if(tail==0){
        tail=head;
     }
     tail->next=head;

}

void clist :: insertAtTail(int val){
    node *temp=head;
    if(head==NULL){
        head=new node(val,head);
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=new node(val, head);
    tail=temp->next;
}

void clist :: deleteAtHead(){
     node *temp=head;
     head=head->next;
      tail->next=head;
      delete temp;
}

void clist :: deleteAtTail(){
    node *temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=head;
    delete tail;

}

void clist :: display(){
    node *temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<head->data<<" =>tail pointing head ";
}
int main(){
    clist c;
    cout<<"\nInserting at head:  ";
    c.insertAtHead(1);
    c.insertAtHead(2);
    c.insertAtHead(3);
    c.insertAtHead(4);
    c.display();
    cout<<"\nInserting at tail:  ";
    c.insertAtTail(7);
    c.display();
    cout<<"\nDeleting at head: ";
    c.deleteAtHead();
    c.display(); 
    cout<<"\nDelete at tail: ";
    c.deleteAtTail();
    c.display();
    return 0;
}