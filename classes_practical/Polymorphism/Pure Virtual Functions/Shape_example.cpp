#include <iostream>
#include <cmath>

// Abstract base class
class Shape
{
public:
    // Pure virtual functions
    virtual double area() = 0;
    virtual double perimeter() = 0;

    virtual ~Shape()
    {
        std::cout << "Destructor of Shape class" << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override
    {
        return M_PI * radius * radius;
    }

    double perimeter() override
    {
        return 2 * M_PI * radius;
    }

    ~Circle()
    {
        std::cout << "Destructor of Circle class" << std::endl;
    }
};

// Derived class: Square
class Square : public Shape
{
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() override
    {
        return side * side;
    }

    double perimeter() override
    {
        return 4 * side;
    }

    ~Square()
    {
        std::cout << "Destructor of Square class" << std::endl;
    }
};

int main()
{
    Shape *shape1 = new Circle(5.0);
    Shape *shape2 = new Square(4.0);

    std::cout << "Circle area: " << shape1->area() << std::endl;           // Output: Area of the circle
    std::cout << "Circle perimeter: " << shape1->perimeter() << std::endl; // Output: Perimeter of the circle

    std::cout << "Square area: " << shape2->area() << std::endl;           // Output: Area of the square
    std::cout << "Square perimeter: " << shape2->perimeter() << std::endl; // Output: Perimeter of the square

    delete shape1; // Properly calls destructors
    delete shape2; // Properly calls destructors

    return 0;
}
