#include<iostream>
using namespace std;
int main(){
cout<<"-------printing 1d array----"<<endl<<endl;
int n;
cout<<"enter no of elements for 1d array:  ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
   cin>>arr[i];
}
for(int i=0; i<n; i++){ 
  cout<<arr[i]<<"  ";
}
return 0;
}