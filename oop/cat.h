#pragma once

#include <iostream>
#include "animal.h"

class Cat : virtual public Animal
{
public:
    Cat();
    Cat(const std::string& inName);
    Cat(const std::string& inName, const std::string& inFood);

    ~Cat();

    // void eat();
    void sleep();
    void meow();

private:
    std::string food = "MILK";
};
