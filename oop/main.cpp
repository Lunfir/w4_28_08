#include <iostream>
#include <vector>

#include "animal.h"
#include "cat.h"
#include "dog.h"

int main()
{
    std::vector<Animal*> zoo;

    Animal* cat = new Cat("tom");
    std::cout << "----------------" << std::endl;

    Animal* dog = new Dog("goofy");
    std::cout << "----------------" << std::endl;

    zoo.push_back(dog);
    zoo.push_back(cat);

    for (Animal* animal : zoo)
    {
        animal->eat();
    }
    std::cout << "----------------" << std::endl;

    for (Animal* animal : zoo) 
    {
        delete animal;
    }

    return 0;
};

    // C memory management
    // 1. int a = 42; ---> stack
    // 2. malloc/free ---> heap

    // C++ memory management
    // 1. C memory management
    // 2. new - delete              ---> heap
    // 3. smart pointers (RAII)     ---> heap