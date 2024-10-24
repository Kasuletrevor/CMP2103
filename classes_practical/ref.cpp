#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual ~Shape()
    {
        cout << "Destructor of Shape class" << endl;
    }
};

int main()
{

    int age = 18;
    int &ref = age;

    cout << age << endl;
    cout << ref << endl;

    ref = 20;
    cout << age << endl;

    return 0;
}