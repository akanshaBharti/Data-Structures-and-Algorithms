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



