#include<iostream>
#include "dNode.h"
using namespace std;
class dList{  
    private:
    dNode* head, *tail;
    public:
    dList(){  
        head=tail=0;
    }
    void insertAtHead(int val);  
    void insertAtTail(int val);  
    void deleteAtHead(); 
    void deleteAtTail();  
    void search(int val);    
    void insertAsSpecified(int val, int loc);  
    void deleteAsSpecified(int val);    
    void reverse();    
    void middleOfList();    
    
    void display();

};   

//inserting at head  
void dList :: insertAtHead(int val){
    head=new dNode(val, head, NULL);        //(value, next, previous)
    if(head->next!=NULL){
        head->next->prev=head;
    }
    
    
    if(tail==NULL){
        tail=head;
    }
}
 
//insert at tail
void dList :: insertAtTail(int val){
    if(head==NULL){       
          head=new dNode(val,NULL,NULL);
          tail=head;
        return;
    }
    tail->next=new dNode(val,NULL,tail);
    tail=tail->next;
    tail->prev->next=tail;
}

//displaying doubly linked list
void dList :: display(){
   dNode* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<" <-> ";
    temp=temp->next;
   }
   cout<<"NULL"<<endl;

}

//delete from head
void dList :: deleteAtHead(){
    dNode* todelete=head;               
    head=head->next;         

    head->prev=NULL;
    // head->next->prev=head;   //*
    delete todelete;
}

//delete from tail
void dList :: deleteAtTail(){
    dNode* temp=head;
    while(temp!=tail){
        temp=temp->next;
    }
    tail=tail->prev;
    tail->next=NULL; 
    //tail->prev->next=tail;   //*
    delete temp;

}

//seaching element
void dList :: search(int val){
    int c=0;
    int loc=1;
    dNode* temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            c=1;
            break;
        }
        loc++;
        temp=temp->next;
    }
    if(c==1){
        cout<<val<<" found at location "<<loc;
    }
    else{
        cout<<"element no found ";
    }
}

//insert element at specified location
void dList :: insertAsSpecified(int val, int loc){
    int c=0;
       dNode* temp=head;
       while(temp!=NULL){
           c++;
            if(c==(loc-1)){
                temp->next=new dNode(val,temp->next,temp);
                
                
                break;
            }
            temp=temp->next;
           
       }
}

//delete specified element
void dList :: deleteAsSpecified(int val){
    dNode* temp=head;
    if(temp->data==val){
        head=head->next;
        head->prev=NULL;
        head->next->prev=head;
        delete temp;
       }
    

    while(temp->next->data!=val){
         temp=temp->next;
       } 
       dNode* todelete=temp->next;   
       temp->next=temp->next->next; 
       temp->next->prev=temp; 
       delete todelete;

}

//reversing the list
void dList :: reverse(){
    dNode* previous=NULL;
    dNode* current=head;
    dNode* next=NULL ;

    while(current!=NULL){
        next=current->next;          //see 
        current->next=previous;

        previous=current;
        current=next;
    }
    head=previous;

}


//middle element of list
void dList :: middleOfList(){
    int l=0;
    int c=0;
    dNode* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    int mid=l/2;   
    if(mid%2==0){
        mid=mid+1;
    }

    dNode* temp2=head;
    while(temp2!=NULL){
        c++;
        if(c==mid){
            cout<<temp2->data;
            break;
            
        }
        temp2=temp2->next;

    }
    
}