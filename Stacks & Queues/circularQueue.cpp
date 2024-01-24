#include<iostream>
using namespace std;

const int size= 10;
class cqueue{
    private:
    int front,last,size;
    int *cq;
    public:
    cqueue(){
        front=last=-1;
        cq[size];
    }
        bool isEmpty(){
            return (front==last==-1);
        }
        bool isFull(){
            return((last+1)%size==front);
        }
    
       //operations
       void enqueue(int val);
       void dequeue();
       void display();
};   

void cqueue :: enqueue(int val){
    if(isFull()){
        cout<<"queue is full ";
        return;
    }
    else{
          if(last==front==-1){         //when queue is empty
            last=front=0;
            cq[last]=val; 
          }
          else{
            last=((last+1)%size);
            cq[last]=val; 
          }
    }
}

void cqueue :: dequeue(){
    if(isEmpty()){
        cout<<"queue empty";
    }
    else{
        if(front==last){           //if only one element in queue
            cout<<cq[front];
            front=last=-1;
        }
        else{
            cout<<"dequeued element"<<cq[front];
            front=((front+1)%size);
        }

    }
}

void cqueue :: display(){
    if(last>=front){
        for(int i=front; i<=last; i++){
            cout<<cq[i]<<"->";
        }
    }
}   
int main(){
    cqueue c;
    c.enqueue(1);
    c.enqueue(2);
    c.enqueue(3);
    c.enqueue(4);
    c.enqueue(5);
    cout<<"inserting element at last: ";
    c.display();
    c.dequeue();
    cout<<"deleting from front: ";
    c.display();
    return 0;  
    
}