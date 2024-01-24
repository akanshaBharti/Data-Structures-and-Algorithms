// implementing stacks using arrays
#include<iostream>
using namespace std;
const int n=100;
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    
    void pop(){
        if(top==-1){
            cout<<"No element to pop; Stack is empty"<<endl;
            return ;
        }
        cout<<"\nelement poped from stack: "<<arr[top];
        top--;
    }

     int Top(){
        if(top==-1){
            cout<<"\nNo element in stack"<<endl;
            return -1;
        }
        cout<<arr[top];
        
     }

     bool empty(){
        return top==-1;
     }

     void display(){
        for(int i=top; i>-1; i--){
            cout<<arr[i]<<" ";
        }
     }
};
int main(){
    stack s;  
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"elements in stack: ";
    s.display();
    //pop
    s.pop();
    cout<<"\nstack after 1st pop: ";
    s.display();
    cout<<"\ntop element: ";
    s.Top();
    //again pop
    s.pop();
    s.pop();
    s.pop();
    cout<<"top element after pop of all elements: "<<s.Top()<<endl;
    cout<<"is stack empty? (1=true, 0=false)"<<s.empty()<<endl;     //return boolean value



    return 0;
}