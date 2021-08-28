#include "animal.h"

void Animal::setName(const std::string& inName)
{
    this->name = inName;
}

const std::string& Animal::getName() const
{
    return this->name;
}


void Animal::eat()
{
    using namespace std;

    cout << __PRETTY_FUNCTION__ << endl;
    cout << "animal: " << this->name << endl;
};

void Animal::walk()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
};

void Animal::sleep()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
};
