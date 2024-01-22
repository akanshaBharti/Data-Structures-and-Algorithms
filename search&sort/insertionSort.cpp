//akansha 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int n=100;
class insertion{
    int arr[n];
    public:
    static int comparison;
    static int swaps;
    int insertionSort(int arr[], int n);
    void display(int arr[], int n);
};

int insertion :: comparison=0;
int insertion :: swaps=0;

int insertion :: insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            comparison++;

            arr[j+1]=arr[j];
            swaps++;

            j--;
        }
        arr[j+1]=current;
        // swaps++;
    }
} 

void insertion :: display(int arr[], int n){
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


    insertion b;
    b.insertionSort(arr,n);
    b.display(arr,n);

    return 0;

}
