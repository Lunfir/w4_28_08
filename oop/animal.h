// animal.h
#include <iostream>

class Animal
{
public:
    Animal() = default;
    ~Animal() = default;

    void eat();
    void walk();
    void sleep();

private:
    std::string name;
};