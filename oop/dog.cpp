#include "dog.h"

Dog::Dog()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Dog::Dog(const std::string& inName)
    : Animal(inName)
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Dog::~Dog()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

void Dog::eat()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

void Dog::sleep()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

void Dog::bark()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
    cout << this->getName() << " says MEOW" << endl;
}
