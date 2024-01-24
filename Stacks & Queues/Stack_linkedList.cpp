//implementing stack using doubly linked list
#include<iostream>
using namespace std;
class node{
    public:
   node* prev, *next;
   int data;
   node(){
    data=0;
    prev=next=NULL;
   }
   node(node *prev ,int val,  node* next=0){
    prev=prev;
    data=val;
    next=next;
   }
};

class stack{
   private:
   node *top;
   public:
   stack(){
    top = 0;
   }
   void push(int val);
   void pop();
   void topElement();
   void display();
   bool isEmpty();
   void stackSize();
   
};

void stack :: push(int val){           //time complexity:O(1)
       //if stack is empty
    if(top==0){
        top=new node(NULL, val, NULL);
        return;
    }  
   top=new node(top,val,NULL);
   if ( top-> prev != 0){
   top->prev->next=top;
   }    
}

void stack :: pop(){              //T.C=O(1)
    if(top==0){
        cout<<"stack is empty";
        return;
    }
    else{
    node *temp=top;
    top=top->prev;
    //top=temp->prev;
    //cout<<"\nelement poped: "<<temp;
    delete temp;
    top->next=NULL;
    }
}

void stack :: topElement(){             //T.C=O(1)
   if(top==0){
    cout<<"Stack is empty";
   }
   else{
   cout<<top->data;
   }
}

void stack :: display(){             //T.C=O(n)
    node *temp=top;
    while(temp!=0){
        cout<<temp->data<<" ";      
        temp=temp->prev;
    }
    
}

bool stack :: isEmpty(){             //T.C=O(1)
    if(top==0){
        return true;
    }
    else{
    return false;
    }
    
}  

void stack :: stackSize(){
    if(top==0){
        cout<<"Stack is empty";
    }
    else{
    int c=0;             //to count no of nodes
    node *temp=top;
    while(top!=0){
        c++;
        temp=temp->prev;
    }
    cout<<"Size of stack: "<<c;
    }

}



int main(){
    stack s;
    cout<<"pushing elements in stack: "<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    cout<<"\nstack after 1st pop: ";
    s.display();
    cout<<"Top element of stack: "<<endl;
    s.topElement();
    cout<<"pop elements: "<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"is stack empty? "<<s.isEmpty();
    s.stackSize();
    return 0;
}