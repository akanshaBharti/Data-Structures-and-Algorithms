#include<iostream>
using namespace std;
int find(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
        return -1;
    
}
int del(int arr[], int n, int key){
    int pos=find(arr, n, key);
    if (pos == -1) {
        cout << "Element not found";
        return n;
    }
    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    return n-1;


}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<"before deletiom: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    n=del(arr, n, key);
    cout<<"after deletion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}