#include <iostream>
using namespace std;
template<class T>
class Sort{
    private:
    T *arr;
    int n;  //size of array
    public:
    Sort(int x);
    ~Sort(){
        delete arr;
    }
    void input();
    void selectionSort();
    void bubbleSort();
    void insertionSort();
    void display();
};
template<class T>
Sort<T>::Sort(int x){       //constructor
    n=x;
    arr=new T[n];
}

template<class T>
void Sort<T>::input(){
    cout<<"\nno of elements: ";
    cin>>n;
     cout<<"enter elements for array: ";
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
}

template<class T>
void Sort<T> :: display(){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

template<class T>
void Sort<T> :: selectionSort(){
   int min_idx;
    for (int i = 0; i < n-1; i++){
       min_idx = i;
        for (int j = i+1; j < n; j++){
        if (arr[j] < arr[min_idx])
            min_idx = j;
        }
        if(min_idx!=i)
            swap(arr[min_idx], arr[i]);
    }
}
template<class T>
void Sort<T> ::bubbleSort(){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template<class T>
void Sort<T> :: insertionSort(){
    int key,j;
    for(int i=1; i<n ;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    //do by menu driven
    int n;
    Sort<int>i(n);
    i.input();
    cout<<"\ninsertion sort: ";
    i.insertionSort();
    i.display();
    Sort<int>s(n);
    s.input();
    cout<<"\nselection sort: ";
    s.selectionSort();
    s.display();
    Sort<int>b(n);
    b.input();
    cout<<"\nbubble sort: ";
    b.bubbleSort();
    b.display();
    return 0;
    
}