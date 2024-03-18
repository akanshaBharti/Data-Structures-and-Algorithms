//insert an element in an unsorted array
#include<iostream>
using namespace std;
void insert(int arr[], int n, int x, int pos){
    for(int i=n-1; i>=pos; i--){
        arr[i+1]=arr[i];
        
    }  
    arr[pos]=x;
}

int main(){
    int n; 
    cout<<"Enter no of elements in list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in list: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x,pos;
    cout<<"enter element and position of the element to be inserted in an array : ";
    cin>>x>>pos;

    insert(arr, n, x, pos);
    n++;
    
    cout<<"after insertion: ";
    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
    }
}