//search an element in rotated sorted array
#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key){
    if(high<low){
        return -1;
    }
 
    int mid =(high+low)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(key<arr[mid]){
        return binarySearch(arr, low, (mid-1), key);
    }
    else{
        return binarySearch(arr, (mid+1), high, key);
    }
}

int findPivot(int arr[], int low, int high){
    if(high<low)
       return -1;
    if(high==low)
      return low;

    int mid =(high+low)/2; 
    if(arr[mid]>arr[mid+1] && mid <high){
        return mid;
    }
    else if(arr[mid]< arr[mid-1] && mid>low ){
        return mid-1;
    }
    if(arr[low] >= arr[mid]){
        return findPivot(arr, low, mid-1);
    }
    else{
        return findPivot(arr, mid+1, high);
    }

}

int pivotelementSearch(int arr[], int n, int key){
    int pivot = findPivot(arr, 0, n-1);
    if(arr[pivot] == key){
        return pivot;
    }
    else if(arr[0] <= key){
       return binarySearch(arr, 0, pivot-1, key);
    }
    else{
        return binarySearch(arr, pivot+1, n-1, key);
    }
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
    int key;
    cout<<"enter no to be searched: ";
    cin>>key;
    cout<<"required element: "<<pivotelementSearch(arr, n, key);
    return 0;
}