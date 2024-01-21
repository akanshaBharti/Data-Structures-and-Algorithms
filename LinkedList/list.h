#include<iostream>
#include "node.h"
using namespace std;
class list{
    private:
    node* head, *tail;
    public:
    list(){
        head= tail= 0;
    }  
    void insertAtHead(int val);    
    void insertAtTail(int val);
    void deleteAtHead();    
    void deleteAtTail();    
    void deleteAsSpecified(int val);   
    void search(int val);    
    void reverse();     
    void insertAsSpecified(int val,int loc);   
    void middleOfList(); 
    
    void display();

};
  //inserting at head
    void list :: insertAtHead(int val){
    head=new node(val,head);
    if(tail==0){
        tail=head;
    }
}
    //insertion at tail
    void list :: insertAtTail( int val){          
       if(head==NULL){       //jab list mai kuch add nhi hai
          head=new node(val,0);
          tail=head;
        return;
    }
    tail->next =new node(val,0);
    tail=tail->next;

}

//insert at specified location
   void list :: insertAsSpecified(int val,int loc){
      int c=0;
      if(head==NULL){
        head=new node(val,0);
        return;
      }
       node* temp=head;
       while(temp!=NULL){
           c++; 
            if(c==(loc-1)){
                temp->next=new node(val,temp->next);
                break;
            }
            temp=temp->next;
           
       }
    
       
   }


    //displaying linked list
void list :: display(){                   
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";  
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
 
  //delete at head
  void list :: deleteAtHead(){
    if(head==NULL || tail==NULL){
        cout<<"list is empty ";
    }
    node* temp=head;
    head=head->next;
    delete temp;

  }

  //delete from tail
  void list :: deleteAtTail(){
    if(head==NULL || tail==NULL){
        cout<<"list is empty";
    }
    node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    node* todelete =temp->next;
    temp->next=NULL;
    tail=temp; 
    delete todelete;
    
    
    
  }

  //delete element as specified
  void list :: deleteAsSpecified(int val){
       node* temp=head;
       if(temp->data==val){
        head=head->next;
        delete temp;
       }
       while(temp->next->data!=val){
         temp=temp->next;
       } 
       node* todelete=temp->next;   
       temp->next=temp->next->next;  
       delete todelete;
       
  }
 
 //searching
void list :: search(int val){
    int c=0;
    int loc=1;
    node* temp=head;
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
        cout<<"element not found";
    }
 }

//reversing linked list
void list :: reverse(){
    node* previous=NULL;
    node* current=head;
    node* next=NULL ;

    while(current!=NULL){
        next=current->next;
        current->next=previous;

        previous=current;
        current=next;
    }
    head=previous;
    

}

//middle element of list
void list :: middleOfList(){
    int l=0;
    int c=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    int mid;
    if((l%2)==0) {
        mid=l/2;
    }
    else  { mid=(l/2)+1; }
    // int mid=l/2; 
    // if(mid%2==0){
    //     mid=mid+1;
    // }

    node* temp2=head;
    while(temp2!=NULL){
        c++; 
        if(c==mid){
            cout<<temp2->data;
            break;
            
        }
        temp2=temp2->next;

    }
    
}
