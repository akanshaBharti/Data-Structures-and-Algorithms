#include <iostream>
using namespace std;
template<class T>
class diagonalMatrix
{
  private:
  int size;
  T *ele;
  public:  
  diagonalMatrix(int n);
  diagonalMatrix(diagonalMatrix<T> const &d);
  ~diagonalMatrix()
  {
    delete [] ele;
  }
  T get(int,int) const;
  void set(int,int,const T&);

};

template<class T>
diagonalMatrix<T> :: diagonalMatrix(int n)
{
  if(n<1)
  cout<<"Matrix size must be >0\n";
  else
  size=n;
  ele=new T[size];
}

template<class T>
T diagonalMatrix<T> :: get(int i,int j) const
{
  if(i<1||j<1||i>size||j>size)
  cout<<"Matrix Index Out Of Bound\n";
  if(i==j)
  return ele[i-1];
  else
  return 0;
}

template<class T>
void diagonalMatrix<T>::set(int i,int j,const T& value)
{
  if(i<1||j<1||i>size||j>size)
  cout<<"Matrix Index Out Of Bound\n";
  if(i==j)
  ele[i-1]=value;
  else
  if(value!=0)
  cout<<"Non diagonal elements must be zero\n";
}

template<class T>
void display(diagonalMatrix<T>& d,int size)
{
for(int i=1;i<=size;i++)
{
for(int j=1;j<=size;j++)
cout<<d.get(i,j)<<" ";
cout<<endl;
}
}

int main(){
diagonalMatrix<int> d(3),d1(3);
d.set(1,1,3);
d.set(2,2,5);
d.set(3,3,1);
cout<<"Matrix A\n";
display(d,3);
d1.set(1,1,5);
d1.set(2,2,3);
d1.set(3,3,1);
cout<<"Matrix B\n";
display(d1,3);
}

