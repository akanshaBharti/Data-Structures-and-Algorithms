#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Output of begin and end: ";       //begin=1st element , end= last element
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of cbegin and cend: ";      //cbegin = const iterator 1st element, cend= const iterator end element
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of rbegin and rend: ";     //rbegin= reverse iterator last element is 1st element, rend= reverse iterator first element is last element
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
 
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
 
    return 0;
}