#include "employee.h"
#include "user.h"

Employee::Employee()
{

}

Employee::Employee(User* inUser)
{
    user = std::move(std::make_unique<User>(*inUser));
}

Employee::~Employee()
{
}

void Employee::setUser(const User* inUser)
{
    user = std::move(std::make_unique<User>(*inUser));
}

const User* Employee::getUser() const
{
    return user.get();
}