#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int n=100;
class bubble{  
    int arr[n];
    public:
    static int comparison;
    static int swaps;
    int bubbleSort(int arr[], int n);
    void display(int arr[], int n);
};

int bubble :: comparison=0;
int bubble :: swaps=0;

int bubble :: bubbleSort(int arr[], int n){
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                comparison++;

                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swaps++;
            }
        }
        counter++;
    }
}

void bubble :: display(int arr[], int n){
    cout<<"\nsorted array with insertion sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\ncomparisons: "<<comparison<<endl;
    cout<<"swaps: "<<swaps;
}

int main(){
    int n=100;
    int arr[n];

    ifstream fin;
    fin.open("input.txt",ios::in);
    string s;
    int num;
    int c=0;
    while(c!=n){
         fin>>s;
         if(fin.eof()){
            break;
         } 
         num=stoi(s); 
         arr[c]=num;
         c++;
    }

    bubble b;
    b.bubbleSort(arr,n);
    b.display(arr,n);

    return 0;

}
