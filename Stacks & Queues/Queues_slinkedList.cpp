//implementing queue using singly linked list
//queue(FIFO) - delete from head and add to tail
#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int val){
        data=val;
        next=NULL;
    }
    // node(int val, node* next){
    //     data=val;
    //     next=next;
    // }
};
  
class queue{
    private:
    node* head, *tail;
    public:
    queue(){
       head=tail=0;
    }

    void enqueue(int val);
    void dequeue();
    int peek();
    void display();
    bool isEmpty();
    
};


void queue :: enqueue(int val){
    //check if queue is full or not
    //if full return overflow
    // node* n=new node(val);
    if(head == NULL){
        tail=new node(val);
        head=tail;
        return;
    }
    tail->next=new node(val);      //arr[tail]=data
    tail=tail->next;                      //tail++
    // tail++;
}

void queue :: dequeue(){
    //check if queue is empty or not
    //if empty return underflow
    if(head==NULL){
        cout<<"Queue is empty";
        return;
    }
    else{
    node *temp=head;
    head=head->next;
    delete temp;
    }

}

int queue :: peek(){
    if(head==NULL){
        cout<<"Queue is empty";
    }
    return head->data;
}

void queue :: display(){
    node *temp=head;
    while(temp!=tail->next){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

bool queue :: isEmpty(){
    if(head==0)
       return true;
    else
       return false;
}

//if full
// bool isFull(){
//     if(head==0 && tail==size-1)
//         return true;
//     else
//       return false;
// }

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"After enqueue: ";
    q.display();
    q.dequeue();
    cout<<"\nafter dequeue: ";
    q.display();
    cout<<"\ntop element: "<<q.peek();
    cout<<"\n"<<q.isEmpty();

    return 0;
}