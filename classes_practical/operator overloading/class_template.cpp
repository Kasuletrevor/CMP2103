#include <iostream>
using namespace std;

template <class T>
class Complex
{
public:
    T real, imag;
    float c2;

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(T x, T y)
    {
        real = x;
        imag = y;
    }
};

int main()
{

    Complex<float> c1;
    Complex<double> c2(5.2, 6.8);
    Complex<char> c3('x', 'y');

    cout << c1.real << " + " << c1.imag << "i" << endl;
    cout << c2.real << " + " << c2.imag << "i" << endl;
    cout << c3.real << " + " << c3.imag << "i" << endl;

    return 0;
}