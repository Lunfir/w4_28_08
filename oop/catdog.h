#include <iostream>

#include "cat.h"
#include "dog.h"

class CatDog : public Cat, public Dog
{
public:
    CatDog();
    CatDog(const std::string& inName);

    ~CatDog();

    // void eat() override;
};
