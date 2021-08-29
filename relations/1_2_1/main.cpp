#include <iostream>

#include "employee.h"
#include "user.h"

void isUser(const Employee* inEmployee)
{
    const auto* currUser = inEmployee->getUser();
    if (currUser == nullptr)
    {
        std::cout << "No User" << std::endl;
    }
    else
    {
        std::cout << "User: " << currUser << std::endl;
    }
}

int main()
{
    Employee* employee = new Employee();

    std::cout << "--- Check if employee is a user" << std::endl;
    isUser(employee);
    
    std::cout << "--- Make employee as user A" << std::endl;
    {
        User* user = new User(employee);
        isUser(employee);
    }
    
    std::cout << "--- Make employee as user B" << std::endl;
    {
        User* user = new User(employee);
        isUser(employee);
    }
    
    delete employee;

    return 0;
}