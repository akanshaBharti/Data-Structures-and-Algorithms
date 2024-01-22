#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int n=100;
class selection{
    int arr[n];
    public:
    static int comparison;
    static int swaps;
    int selectionSort(int arr[], int n);
    void display(int arr[], int n);
};

int selection :: comparison=0;
int selection :: swaps=0;

int selection :: selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                comparison++; 

                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                swaps++;
            } 
        }
    }
}

void selection :: display(int arr[], int n){
    cout<<"\nsorted array with selection sort: ";
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

    selection b;
    b.selectionSort(arr,n);
    b.display(arr,n);

    return 0;

}
