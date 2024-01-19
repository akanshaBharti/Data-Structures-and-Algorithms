#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no of rows and columns for matrix: ";
    cin>>n>>m;
    // int arr[4][5]={
    //     {0 , 0 , 3 , 0 , 4 },
    //     {0 , 0 , 5 , 7 , 0 },
    //     {0 , 0 , 0 , 0 , 0 },
    //     {0 , 2 , 6 , 0 , 0 }
    // };
    int arr[n][m];
    cout<<"Enter elements in matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int size=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=0){
                size++;
            }
        }
    }
    int sparseMatrix[3][size];
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=0){
                sparseMatrix[0][k]=i;
                sparseMatrix[1][k]=j;
                sparseMatrix[2][k]=arr[i][j];
                k++;

            }
        }
    }
    cout<<endl<<"SPARSE MATRIX: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<size; j++){
            cout<<sparseMatrix[i][j]<<" ";
        }cout<<endl;
    }
    

    return 0;
}