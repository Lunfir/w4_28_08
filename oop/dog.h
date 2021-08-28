#pragma once

#include <iostream>
#include "animal.h"

class Dog : virtual public Animal
{
public:
    Dog();
    Dog(const std::string& inName);

    ~Dog();

    // void eat();
    void sleep();
    void bark();
};