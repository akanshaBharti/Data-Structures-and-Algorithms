/*Find the element that appears once in an array where every other element appears twice.
Time complexity of this solution is O(n^2)
Auxiliary Space: O(1) as constant space is used.
*/

#include<iostream>
using namespace std;
int findSingle(int arr[],int n){
    
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                c++;
            }
         }
        if(c==1){
            return arr[i];
        }
    }
    return -1;     
    }

int main(){
    int arr[]={1,2,2,3,5,3,1,4, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"single element "<<findSingle(arr,n);
    return 0;
}