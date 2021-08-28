#include <iostream>
#include "animal.h"
#include "cat.h"

int main()
{
    // Animal animal("ANIMAL");
    // Animal animal = Animal("ANIMAL");

    Cat cat = Cat("CAT", "meat");

    std::cout << "cat: " << cat.getName() << std::endl;

    return 0;
};