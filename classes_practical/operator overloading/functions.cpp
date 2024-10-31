#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    cout << "Addition of integers: " << add(3.5, 5.8) << endl;
    cout << "Addition of integers: " << add(7, 8) << endl;

    return 0;
}