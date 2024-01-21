#include<bits/stdc++.h>
using namespace std;
class circularQueue{
private:
int f,r;
int ar[5];
int size = sizeof(ar)/sizeof(ar[0]);
int itemcount;
public:
circularQueue(){
itemcount=0;
f=-1;
r=-1;
for(int i=0;i<size;i++){
ar[i]=INT_MAX;
}
}
bool isEmpty(){
if(f==-1 && r==-1){
return true;
}
else
return false;
}
bool isFull(){
if((r+1)%size==f){
return true;
}
else
return false;
}
void enqueue(int value){
if(isFull()){
cout<<"Queue is Full"<<endl;
return;
}
else if(isEmpty()){
r=f=0;
}
else{
r=(r+1)%size;
}
itemcount++;
ar[r]=value;
return;
}
int dequeue(){
int x;
if(isEmpty()){
cout<<"Queue is Empty"<<endl;
return 0;
}
else if(r==f){
x=ar[f];
r=-1;
f=-1;
ar[f]=0;
itemcount--;
return x;
}
else{
x=ar[f];
ar[f]=INT_MAX;
f=(f+1)%size;
itemcount--;
return x;
}
}
int count(){
return itemcount;
}
void display(){
cout<<"Queue is: "<<endl;
for(int i=0;i<size;i++){
if(ar[i]!=INT_MAX)
cout<<ar[i]<<" ";
}
cout<<endl;
}
int firstEl()
{
return ar[f];
}
};
int main(){
circularQueue q;
cout<<"Enqueue 1,2,3,4\n";
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.display();
cout<<"Dequeue from queue\n";
cout<<q.dequeue()<<endl;
q.display();
cout<<"First element of queue\n";
cout<<q.firstEl();
return 0;
}