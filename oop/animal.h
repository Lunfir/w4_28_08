// animal.h
#pragma once
#include <iostream>

class Animal
{
public:
    Animal() = default;
    ~Animal() = default;

    void setName(const std::string& inName);
    const std::string& getName() const;
 
    void eat();
    void sleep();

protected:
    void walk();

private:
    std::string name;
};