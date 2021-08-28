#pragma once

#include <iostream>
#include "animal.h"

class Cat : public Animal
{
public:
    Cat() = default;
    ~Cat() = default;

    void eat();
    // void walk();
};
