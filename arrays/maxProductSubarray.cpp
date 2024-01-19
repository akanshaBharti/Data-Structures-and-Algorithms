//subarray= contiguos part of array
#include<iostream>
using namespace std;

int maxProduct(int arr[], int n){
    int result = arr[0];
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            result =max(result, x);
            x*= arr[j];
        }
        result = max(result, x);
    }
    return result;
}

int main(){ 
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"product of max subarray: "<<maxProduct(arr, n);
    return 0;
}


