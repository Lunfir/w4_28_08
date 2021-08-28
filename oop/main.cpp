#include <iostream>
#include "animal.h"
#include "cat.h"

int main()
{
    Animal animal;
    animal.setName("ANIMAL");
    animal.eat();

    Cat cat;
    cat.eat();

    cat.setName("Meow");
    std::cout << "cat: " << cat.getName() << std::endl;

    return 0;
};