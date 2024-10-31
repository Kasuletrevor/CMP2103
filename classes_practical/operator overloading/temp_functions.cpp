#include <iostream>
using namespace std;

template <class T>
T add(T a, float b)
{
    return a + b;
}

int main()
{

    cout << "Addition of floats: " << add(3.5, 5.8) << endl;
    cout << "Addition of integers: " << add(7, 9.5) << endl;

    return 0;
}