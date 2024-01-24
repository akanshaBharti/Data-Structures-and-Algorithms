//implementing queue with circular linked list
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        data=0;
        next=NULL;
    }  
    node(int val, node* addr){
        data=val;
        next=addr;
    }

};
class clist{
    private:
    node *head, *tail;
    public:
    clist(){
        head=tail=0;
    }
    void insertAtHead(int val); // to enqueue at last
    void insertAtLast(int val);  //
    void deleteFromFront();  //
    void display();
};
void clist ::  insertAtHead(int val){
     head=new node(val,head);
     if(tail==0){
        tail=head;
     }
     tail->next=head;

}

void clist :: insertAtLast(int val){
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

void clist :: deleteFromFront(){
     node *temp=head;
     head=head->next;
      tail->next=head;
      delete temp;
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
    cout<<"\nInitial Queue:  ";
    c.insertAtHead(1);
    c.insertAtHead(2);
    c.display();
    cout<<"\nInserting at last:  ";
    c.insertAtLast(7);
    c.insertAtLast(8);
    c.insertAtLast(9);
    c.insertAtLast(10);
    c.display();
    cout<<"\nDeleting at front: ";
    c.deleteFromFront();
    c.display(); 
    return 0;
}
