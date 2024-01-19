#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int n1,n2;
   cout<<"Enter n1, n2: ";
   cin>>n1>>n2;
   int A1[n1], A2[n2];
   cout<<"A1 elements: ";
   for(int i=0; i<n1;i++){
    cin>>A1[i];
   }
   cout<<"A2 elements: ";
   for(int j=0; j<n2; j++){
    cin>>A2[j];
   }
 
   int A3[n1+n2];
   int i=0, j=0, k=0;
   while(i<n1){
    A3[k++]=A1[i++];
   }
   while(j<n2){
    A3[k++]=A2[j++];
   }

   sort(A3, A3+n1+n2);
   cout<<"A3: ";
   for(int i=0; i<n1+n2; i++){
    cout<<A3[i]<<" ";
   }

}