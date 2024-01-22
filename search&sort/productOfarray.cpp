//product of array except itself --incomplete
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int product[n];
    int x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                x*= arr[j];
            }
        }
        product[i]= x;
    }

    cout<<"output array: ";
    for(int i=0; i<n; i++){
        cout<<product[i]<<" ";
    }
}