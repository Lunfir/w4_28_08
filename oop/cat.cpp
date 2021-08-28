#include "cat.h"

Cat::Cat()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Cat::Cat(const std::string& inName, const std::string& inFood)
    : Animal(inName)
    , food(inFood)
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

Cat::~Cat()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

void Cat::eat()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

void Cat::meow()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
    cout << this->getName() << " says MEOW" << endl;
}
