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
