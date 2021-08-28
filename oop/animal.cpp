#include "animal.h"

Animal::Animal()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Animal::Animal(const std::string& inName)
    : name(inName)
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Animal::~Animal()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

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
};

void Animal::walk()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
};

void Animal::sleep()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
};
