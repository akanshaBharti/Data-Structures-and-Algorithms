//lumoto = last element pivot 
#include<iostream>
// #include<fstream>
// #include<string>
using namespace std;

const int n=100;
class QuickSort{
    int arr[n];  
    public:
    static int comparisons;
    static int swaps;
    int partition(int arr[], int p, int r );
    void quickSort(int arr[], int p, int r);
    void display(int arr[], int n);
};

int QuickSort :: comparisons=0;
int QuickSort :: swaps=0;

int QuickSort :: partition(int arr[], int p, int r){
     int x=arr[r];  //pivot is last element
     int i=p-1;
     int temp;
     for(int j=p; j<r; j++){
        if(arr[j]<x){
            comparisons++;
            i=i+1;

            //arr[i]<->arr[j] swap
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            swaps++;
        }
    }
    temp=arr[r];
    arr[r]=arr[i+1];
    arr[i+1]=temp;
    swaps++;
    return i+1;
    
}



void QuickSort :: quickSort(int arr[], int p, int r){
     if(p<r){
        int q=partition(arr,p,r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
     }
}

void QuickSort :: display(int arr[], int n){
    cout<<"\nSorted array with Lumoto-quick sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\ncomparisons: "<<comparisons<<endl;
    cout<<"swaps: "<<swaps;
}
int main(){
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    QuickSort q;
    q.quickSort(arr,0,n-1);  
    q.display(arr,n);
    return 0;

    
    
    // ifstream fin;
    // fin.open("input.txt",ios::in);
    // string s;
    // int num;
    // int c=0;
    // while(c!=n){
    //      fin>>s;
    //      if(fin.eof()){
    //         break;
    //      }
    //      num=stoi(s);
    //      arr[c]=num;
    //      c++;
    // }
    
}

// comparions:250, swaps=315 with random repeated 100 elements comparisons,swaps depends upon elements repeating