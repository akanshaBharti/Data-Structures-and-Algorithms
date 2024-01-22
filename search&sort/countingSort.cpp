//not giving output
#include<iostream>
using namespace std;

const int n=10;  
class counting{ 
   int A[n],B[n];
   public:
   int getMax(int A[], int n);
   void countingSort(int A[], int B[], int n);
   void display(int B[], int n);
   
};

int counting :: getMax(int A[], int n){
    int max=A[0];

    //finding largest element 
    for(int i=1; i<=n; i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max; 
}

void counting :: countingSort(int A[], int B[], int n){
    int max=getMax(A,n);
    // cout<<"max element: "<<max;

    int C[max+1];  //either give a range or max+1 for C array

    //initilizing count array C
    for(int i=0; i<=max; i++){
        C[i]=0;       
    }
    cout<<endl;

    //storing count of each element
    for(int i=1; i<=n; i++){
        C[A[i]]++;
    }

    //store cumulative count
    // cout<<"Array C cumulative count: ";
    for(int i=1; i<=max; i++){
        C[i]= C[i] + C[i-1];
        // cout<<C[i]<<" ";
    }
    
    //C[i] now contains the number of elements less than or equal to i
    for(int j=n; j>=1; j--){
        B[C[A[j]]]=A[j];
        C[A[j]]--; //decreasing count for same numbers
    }
   

    //storing to output array B
    for(int i=1; i<=n; i++){
        A[i]=B[i];
    }
    
}

void counting :: display(int B[], int n){
    cout<<"output sorted array with counting sort: ";
    for(int i=1; i<=n; i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter no of elements for input array: ";
    cin>>n;
    int A[n],B[n];
    cout<<"Enter input array: ";
    for(int i=1; i<=n; i++){
        cin>>A[i];
    }
    
    counting c;
    c.countingSort(A,B,n);
    c.display(B,n);

    return 0;
}

// for n=7 , input array: 1 4 1 2 7 5 2
// max element: 7
//  output array: 1 1 2 2 4 5 7