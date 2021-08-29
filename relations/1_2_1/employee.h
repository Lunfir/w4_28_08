#pragma once
#include <iostream>
#include <memory>

class User;

class Employee
{
public:
    Employee();
    Employee(User* inUser);
    
    virtual ~Employee();

    void setUser(const User* inUser);
    const User* getUser() const;

protected:
    std::unique_ptr<User> user;
};