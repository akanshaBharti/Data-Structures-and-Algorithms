#include <iostream>
using namespace std;

class Cafes
{
private:
    string title;

public:
    Cafes(string b){    //constructor
       setTitle(b);
    }
    void cafeteria() { cout << "Cafeteria and co." << endl; }
    void crust() { cout << "Mr crust" << endl; }
    void setTitle(string x)
    {
        title = x;
    }
    string getTitle()
    {
        return title;
    }
};

int main()
{
    Cafes c("cafes near me:");
    // c.setTitle("Cafes near me:");
    cout << c.getTitle()<<endl;
    c.cafeteria();
    c.crust();

    return 0;
}