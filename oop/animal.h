// animal.h
#pragma once
#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const std::string& inName);
    Animal(const Animal& inAnimal);

    virtual ~Animal();

    void setName(const std::string& inName);
    const std::string& getName() const;
 
    virtual void eat() = 0; // pure virtual method
    void sleep();

protected:
    void walk();

private:
    std::string name = "ANIMAL";
};