//Hoare = first element pivot and then we place it to its right place(low and high vacancy concept) 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int n=100;
class vacancy{
    private:
    int arr[n];   
    public:
    static int comparison;
    static int swaps;
    void swap(int *a, int *b);
    int partition(int arr[], int first, int last);
    void quickSort(int arr[], int first, int last);
    void display(int arr[], int n);
};

int vacancy :: comparison=0;
int vacancy :: swaps=0;

void vacancy :: swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int vacancy :: partition(int arr[],int first, int last ){
    int pivot=arr[first];
    int i=first - 1;
    int j=last + 1;

   while(true){
    do{
        i++;
        comparison++;
    }while(arr[i]<pivot);

    
    do{
        j--;
        comparison++;
    }while(arr[j]>pivot);

    if(i>=j){
        return j;
        comparison++;
    }
    swap(&arr[i],&arr[j]);
    swaps++;

   }
}

void vacancy :: quickSort(int arr[], int first, int last){
      if(first<last){
        int spiltPoint = partition(arr, first, last);
        quickSort(arr,first,spiltPoint);  // spiltPoint-1 or just splitPoint
        quickSort(arr, spiltPoint+1, last);
    }
}


void vacancy :: display(int arr[], int n){
    cout<<"\nSorted array with Hoare-quick sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\nComparisons: "<<comparison<<endl;
    cout<<"Swaps: "<<swaps;

}

int main(){
    int n=10; 
    int arr[n];
    cout<<"enter elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}

    vacancy v;
    v.quickSort(arr,0,n-1);
    v.display(arr,n);
    return 0;
}

// comparions: 1116   
// swaps: 164 (with repeated random no.)