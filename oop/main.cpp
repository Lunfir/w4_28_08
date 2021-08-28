#include <iostream>
#include <vector>

#include "animal.h"
#include "cat.h"
#include "dog.h"
#include "catdog.h"

int main()
{
    CatDog* catDog = new CatDog("CATDOG");
    std::cout << "----------------\n";

    // catDog->Cat::eat();
    //catDog->eat();
    std::cout << "catDog: " << catDog->getName() << std::endl;

    std::cout << "----------------\n";
    delete catDog;

    return 0;
};

    // C memory management
    // 1. int a = 42; ---> stack
    // 2. malloc/free ---> heap

    // C++ memory management
    // 1. C memory management
    // 2. new - delete              ---> heap
    // 3. smart pointers (RAII)     ---> heap