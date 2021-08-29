#pragma once
#include <iostream>

class Employee;

class User
{
public:
    User(Employee* inEmployee);

    virtual ~User();

protected:
    Employee& employee;
};