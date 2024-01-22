#include<iostream>
#include<fstream>
#include<string>  
using namespace std;
const int n=100;

class HeapSort{
    int arr[n];   
    public:
    static int comparison;  //for comparison
    static int swaps;
    void swap(int* a, int* b);
    void heapify(int arr[], int n, int i);
    void heapSort(int arr[], int n);
    void display(int arr[], int n);

};

int  HeapSort :: comparison=0;
int HeapSort :: swaps=0;

void HeapSort :: swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void HeapSort :: heapify(int arr[],int n,int i){
     int largest=i;
     int left=2*i + 1;
     int right = 2*i + 2;
 
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {   //if largest is not root
        swap(&arr[i], &arr[largest]);
        swaps++;
        heapify(arr, n, largest);
    }
}

void HeapSort :: heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)   //indexing starting from 0
        heapify(arr, n, i);                //buildMaxHeap
 
    for (int i = n - 1; i > 0; i--) {     
        swap(&arr[i], &arr[0]);
        swaps++;
        
        heapify(arr, i, 0);  
        comparison++;
    }
}

void HeapSort :: display(int arr[], int n){
    cout<<"\nsorted array with heap sort: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"\ncomparisons: "<<comparison<<endl;
    cout<<"swaps: "<<swaps;
}

int main(){
    int n=10;
    int arr[n];
    cout<<"enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    HeapSort h;
    h.heapSort(arr,n);
    h.display(arr,n);
    return 0;
    

}

// comparions:99, swaps=571 with random repeated 100 elements