//implementing queue using array
//queue(FIFO) - delete from head and add to tail
#include<iostream>
using namespace std;

const int n=20;
class queue{
    int* arr;
    int head;
    int tail;
    public:
    queue(){
        arr = new int[n];
        head=tail=-1; 
    }
    
    void enqueue(int x){
        if(tail==(n-1)){
            cout<<"queue overflow"<<endl;

        }
        else{
            if(head==-1){           //when appending first element in queue since head is at -1 initially
            head++;            //only when adding first element
            tail++;
            arr[head]=x;
        }
           else{
           tail++;
           arr[tail]=x;
        }
        }
       
    }

    void dequeue(){
        if(head==-1 || head>tail){
           cout<<"queue is empty"<<endl;
           return;
        }
        else{
        head++;            //since head keeps on incrementing whenever we pop 1st element 
         }                  //no need of bothering poped element
    }

    void peek(){               //gives head
        if(head==-1 || head>tail){
           cout<<"queue is empty"<<endl;
        }
        else{
            cout<< arr[head];
        }
    }

   bool isEmpty(){
        if(head==-1 || head>tail){
           return true;
        }
        return false;
   }

   void display(){
    for(int i=head; i!=tail+1; i++){
        cout<<arr[i]<<" ";
    }
   }
};
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<"after enqueue: ";
    q.display();
    q.dequeue();
    cout<<"\nafter dequeue: ";
    q.display();
    cout<<"\nfirst element of queue: ";
    q.peek();
    cout<<"\nis queue empty: "<<q.isEmpty();

return 0;
}  