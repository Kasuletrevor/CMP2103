#include <iostream>

// Base Class
class Animal
{
public:
    virtual void sound()
    {
        std::cout << "Some generic animal sound." << std::endl;
    }

    virtual ~Animal()
    {
        std::cout << "Animal destroyed." << std::endl;
    }
};

// Derived Class 1
class Dog : public Animal
{
public:
    void sound() override
    {
        std::cout << "Woof!" << std::endl;
    }

    ~Dog()
    {
        std::cout << "Dog destroyed." << std::endl;
    }
};

// Derived Class 2
class Cat : public Animal
{
public:
    void sound() override
    {
        std::cout << "Meow!" << std::endl;
    }

    ~Cat()
    {
        std::cout << "Cat destroyed." << std::endl;
    }
};

int main()
{
    Animal *myAnimal = new Dog(); // Base class pointer to derived class object
    myAnimal->sound();            // Output: Woof! (dynamic dispatch)

    delete myAnimal; // Proper cleanup due to virtual destructor

    return 0;
}
