#include "user.h"
#include "employee.h"

User::User(Employee* inEmployee)
    : employee(*inEmployee)
{
    employee.setUser(this);
}

User::~User()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
