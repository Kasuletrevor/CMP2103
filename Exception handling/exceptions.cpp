// Exception handling in C++
// using division by zero as the example

#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    float divisor, dividend;
    float quotient;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    assert(divisor != 0);
    assert(divisor > 0);

    quotient = dividend / divisor;

    cout << "The quotient is: " << dividend / divisor << endl;

    return 0;
}