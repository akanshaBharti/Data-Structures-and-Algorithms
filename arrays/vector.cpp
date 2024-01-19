#include<iostream>
#include<algorithm>    //to use sort
#include<vector>    //to use vectors
using namespace std;
int main(){
    vector<int> v; 
    // v.push_back(3); 
    // v.push_back(2); 
    // v.push_back(1); 
    for(int i=1; i<4; i++){  
        v.push_back(i); 
    } 
    cout<<"v: "<<endl; 
    //to print vector elements 
    for(int i=0; i<v.size(); i++){ 
        cout<<v[i]<<" "; 
    } 
    cout<<endl;
    //2nd way to iterate
    vector<int> :: iterator i;
    for(i=v.begin(); i!=v.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //3rd way to traverse
    for(auto element:v){       //auto keyword=compiler will decide what is the data type,we need not to specify
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();   //deleting last element
    vector<int> v2(3,50);   //v2(size,element)
    cout<<"v2: "<<endl;
    for(auto element: v2){
        cout<<element<<" ";
    }
    cout<<endl;



    //to swap values of v and v2
    swap(v,v2);
    cout<<"v: ";
    for(auto element: v){
        cout<<element<<" ";
    }
    cout<<endl;
    cout<<"v2: ";
    for(auto element: v2){
        cout<<element<<" ";
    }
    cout<<endl;

    //sorting
    cout<<"sorted v2: ";
    sort(v2.begin(), v2.end());
    for(auto element: v2){
        cout<<element<<" ";
    }
    cout<<endl;
return 0;
}