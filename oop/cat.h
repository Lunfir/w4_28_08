#pragma once

#include <iostream>
#include "animal.h"

class Cat : public Animal
{
public:
    Cat();
    Cat(const std::string& inName, const std::string& inFood);

    ~Cat();

    void eat();
    void meow();

private:
    std::string food;
};
