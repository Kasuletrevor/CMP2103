#include <iostream>
using namespace std;

class Person
{

private:
    string nationality;
    // string residence;
    int age;

    string name;

    Person()
    {
        cout << "Person created" << endl;
        name = "N/A";
        nationality = "N/A";
        age = 0;
    }
};

int main()
{

    return 0;
}