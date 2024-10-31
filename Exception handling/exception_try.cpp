// Exception handling in C++
// using division by zero as the example

// try-catch
// throw

// throw  variable

#include <iostream>
#include <cassert>
#include <stdexcept>
using namespace std;

int main()
{
    float divisor, dividend;
    float quotient;
    cout << "Enter dividend: ";
    cin >> dividend;

    try
    {
        cout << "Enter divisor: ";
        cin >> divisor;

        if (divisor == 0)
        {
            throw runtime_error("Error: Invalid divisor value");
        }

        if (divisor < 0)
        {
            throw "error, your divisor is not positive";
        }

        quotient = dividend / divisor;

        cout << "The quotient is: " << dividend / divisor << endl;
    }

    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }

    catch (const char *e)
    {
        cout << e << endl;
    }

    cout << "You have come to the end of the program" << endl;

    return 0;
}