#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"reversed array: ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
return 0;
}