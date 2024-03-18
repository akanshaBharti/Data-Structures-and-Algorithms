#include<iostream>
using namespace std;
int main(){
cout<<"----------------printing 2d array---------"<<endl<<endl;
int n,m;
cout<<"enter rows and columns: ";
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n; i++)
  { for(int j=0; j<m; j++)
       {cin>>arr[i][j];
        }
   }
cout<<"2d arrray: "<<endl;
for(int i=0; i<n; i++)
  { for(int j=0; j<m; j++)
       {
        cout<<arr[i][j]<<"  ";
        }
         cout<<endl;
   }
return 0;
}