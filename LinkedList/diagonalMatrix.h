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
  void add(diagonalMatrix<T> &d);
  void subtract(diagonalMatrix<T> const &d);
  void multiply(diagonalMatrix<T> const &d);
  void transpose();
};
template<class T>
diagonalMatrix<T>::diagonalMatrix(diagonalMatrix<T> const &d)
{
  ele=d.ele;
}
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
void diagonalMatrix<T>::add(diagonalMatrix<T>  &d)
{
  for(int i=0;i<size;i++){
  this->ele[i] =this->ele[i]+d.ele[i];
  }
  return;
}
template<class T>
void diagonalMatrix<T>::subtract(diagonalMatrix<T> const &d)
{
  for(int i=0;i<size;i++)
  this->ele[i]=this->ele[i]-d.ele[i];
  return;
}
template<class T>
void diagonalMatrix<T>::multiply(diagonalMatrix<T> const &d)
{
  for(int i=0;i<size;i++)
  this->ele[i]=this->ele[i]*d.ele[i];
  return;
}
template<class T>
void diagonalMatrix<T>::transpose()
{
    // Transpose of the diagonal Matrix same as the initial Matrix
  return;
}