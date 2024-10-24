// operator overloading for Complex numbers

#include <iostream>
using namespace std;

class Complex
{
    // friend Complex operator+(Complex c1, Complex c2);
    friend ostream &operator<<(ostream &, Complex &);
    friend Complex &operator++(Complex &);

private:
    int x;
    int y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    }
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << x << "+" << y << "i" << endl;
    }

    Complex add(Complex c2)
    {
        Complex temp(0, 0);
        temp.x = this->x + c2.x;
        temp.y = this->y + c2.y;

        return temp;
    }

    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.x = x + c2.x;
        temp.y = y + c2.y;
        return temp;
    }

    //     Complex &operator++()
    // {
    //     x++;
    //     y++;
    //     return *this;
    // }
};

ostream &operator<<(ostream &obj, Complex &c1)
{
    return obj << c1.x << "+" << c1.y << "i" << endl;
}

Complex &operator++(Complex &c1)
{
    Complex temp;
    temp.x = c1.x + 1;
    temp.y = c1.y + 1;

    return temp;
}
// Complex operator+(Complex c1, Complex c2)
// {
//     Complex temp(0, 0);
//     temp.x = c1.x + c2.x;
//     temp.y = c1.y + c2.y;

//     return temp;
// }

// Complex add(Complex c1, Complex c2)
// {
//     Complex temp(0, 0);
//     temp.x = c1.x + c2.x;
//     temp.y = c1.y + c2.y;

//     return temp;
// }

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3;

    c3 = c1 + c2;
    cout << c3;

    ++c3;

    // Complex c3 = c1.add(c2);

    c3.print();

    // c1.print();

    return 0;
}