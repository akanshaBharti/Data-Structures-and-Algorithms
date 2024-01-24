//implementation of double ended queue using doubly linked list
#include<iostream>
using namespace std;
class dNode{
    public:
    dNode* prev, *next;
    int data;  
    dNode(){  
        data=0;
        prev = next= NULL;
    }
    dNode(int val, dNode* n, dNode* p){
          data=val;
          prev=p;
          next=n;
    }
}; 

class deque{    
    private:  
    dNode *front, *last;
    public:
    deque(){
        front=last=0;
    }
    void insertAtfront(int val);
    void insertAtlast(int val);
    void deleteFromFront();
    void deleteFromLast();
    void display();  
};

//value,next,prev
void deque :: insertAtfront(int val){
     front=new dNode(val,front,NULL);
     if(front->next!=NULL){
        front->next->prev=front; 
     }
    
     if(last==NULL){
        last=front;
     }

}
//value,next,prev
void deque :: insertAtlast(int val){
    if(front==NULL){
        front=new dNode(val,NULL,NULL);
        last=front;
        return;
    }
    last->next=new dNode(val,NULL,last);
    last=last->next;
    last->prev->next=last; 
}
//value,next,prev
void deque :: deleteFromFront(){   
    dNode* temp=front;
    front=front->next;

    front->prev=NULL;
    front->next->prev=front;
    delete temp;
}
//value,next,prev
void deque :: deleteFromLast(){
    dNode* temp=last;
    last=last->prev;
    last->next=NULL;
    delete temp;
}

void deque :: display(){
    dNode *temp=front;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    deque d;
    d.insertAtfront(1);
    d.insertAtfront(2);
    d.insertAtfront(3);
    d.insertAtfront(4);
    cout<<"insert at front: ";
    d.display();

    d.insertAtlast(7);
    d.insertAtlast(8);
    cout<<"insert at last: ";
    d.display();

    d.deleteFromFront();
    cout<<"delete from front: ";
    d.display();

     d.deleteFromLast();
     cout<<"delete from last: ";
     d.display();

    return 0;
}