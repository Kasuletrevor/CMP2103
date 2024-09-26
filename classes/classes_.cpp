#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string color = "red";
    int num_of_engines = 1;
    int max_speed = 180;

    // Car class constructors
    Car()
    {
        cout << "car created" << endl;
    }

    // Car class destructors
    ~Car()
    {
        cout << "car demolished" << endl;
    }

private:
    int price = 9;
    string owner = "Manana";

    int increase_price()
    {
        price++;
    }
};
int main()
{
    // Car myCar;
    class Mercedes : public Car
    {
    public:
        int num_seats = 5;

        Mercedes()
        {
            cout << "mercedes created" << endl;
        }
        ~Mercedes()
        {
            cout << "mercedes demolished" << endl;
        }
    };

    Mercedes myCar;
    // The code shows an  error because price is a private member of the Car class and can only be accessed within that class.
    // cout << "my car is worth " << myCar.price << endl;

    cout << "my car is " << myCar.color << endl;
    cout << "my car has " << myCar.max_speed << " km/hr." << endl;
    myCar.max_speed = 250;
    cout << "now my car has " << myCar.max_speed << " km/hr." << endl;
    cout << "my car has " << myCar.num_seats << " km/hr." << endl;
    return 0;
}