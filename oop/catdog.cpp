#include "catdog.h"

CatDog::CatDog()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

CatDog::CatDog(const std::string& inName)
    : Cat(inName)
    , Dog(inName)
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

CatDog::~CatDog()
{
    using namespace std;
    cout << __PRETTY_FUNCTION__ << endl;
}

// void CatDog::eat()
// {
//     using namespace std;
//     cout << __PRETTY_FUNCTION__ << endl;
// }