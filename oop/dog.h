#pragma once

#include <iostream>
#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    Dog(const std::string& inName);

    ~Dog();

    void eat() override;
    void sleep();
    void bark();
};