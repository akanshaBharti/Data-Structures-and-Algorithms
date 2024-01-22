#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

void bucketsort(float arr[], int n){
    vector<float> b[n]; 
    for(int i=0; i<n; i++){
        int bi = n*arr[i];
        b[bi].push_back(arr[i]);
    }

    for(int i=0; i<n; i++)
        sort(b[i].begin(), b[i].end());

    int index=0;  //used when one bucket have more than one element
    for(int i=0; i<n; i++){
        for(int j=0; j<b[i].size(); j++)
            arr[index++]=b[i][j];
    }

}

int main(){
    float arr[]={0.79, 0.78, 0.795, 0.74, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94};
    int n=sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr,n);

    cout<<"sorted array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}

// 0.79, 0.78, 0.795, 0.74, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94
// 0.79, 0.13, 0.64, 0.39, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94