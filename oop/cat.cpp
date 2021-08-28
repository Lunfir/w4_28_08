#include "cat.h"

void Cat::eat()
{
    using namespace std;

    cout << __PRETTY_FUNCTION__ << endl;
    cout << "cat: " << this->getName() << endl;
}

// void Cat::walk()
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
// }
