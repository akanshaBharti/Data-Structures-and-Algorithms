#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0 ; i<n; i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    

    cout<<"max no: "<<maxNo<<" min no: "<<minNo;
  return 0;

}