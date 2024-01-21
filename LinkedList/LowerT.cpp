#include <iostream>
using namespace std;
template<class T>
class lowerTriangularMatrix
{
private:
T *ele;    
int size;
public:
lowerTriangularMatrix(int n);
lowerTriangularMatrix(lowerTriangularMatrix<T> const &d);
~lowerTriangularMatrix()
{
delete [] ele;
}
T get(int,int) const;
void set(int,int,const T&);
};

template<class T>
lowerTriangularMatrix<T>::lowerTriangularMatrix(int n)
{
if(n<1)
cout<<"Matrix size must be >0\n";
else
size=n;
ele=new T[size*(size+1)/2];
}

template<class T>
T lowerTriangularMatrix<T>::get(int i,int j) const
{
if(i<1||j<1||i>size||j>size)
cout<<"Matrix Index Out Of Bound\n";
if(i>=j)
return ele[(i-1)*i/2+j-1];
else
return 0;
}

template<class T>
void lowerTriangularMatrix<T>::set(int i,int j,const T& value)
{
if(i<1||j<1||i>size||j>size)
cout<<"Matrix Index Out Of Bound\n";
if(i>=j)
ele[(i-1)*i/2+j-1]=value;
else
if(value!=0)
cout<<"Non diagonal elements must be zero\n";
}
template<class T>
void display(lowerTriangularMatrix<T>& d,int size)
{
for(int i=1;i<=size;i++)
{
for(int j=1;j<=size;j++)
cout<<d.get(i,j)<<" ";
cout<<endl;
}
}

int main()
{
lowerTriangularMatrix<int> d(3),d1(3);
d.set(1,1,3);
d.set(2,2,5);
d.set(3,3,1);
d.set(2,1,2);
d.set(3,1,9);
d.set(3,2,4);
display(d,3);
return 0;
}