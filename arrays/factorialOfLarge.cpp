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
    int maxNo=INT_MIN;
    for(int i=0; i<n; i++){
        maxNo=max(maxNo, arr[i]);
    }
    int f=1;
    for(int i=1; i<=maxNo; i++){
        f=f*i;
    }
    cout<<"maximum no in array: "<<maxNo<<endl;
    cout<<"factorial of maximum no.: "<<f;
 
 return 0;
}
