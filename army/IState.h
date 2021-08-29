#pragma once
#include <iostream>

class IUnit;

class IState
{
public:
    virtual ~IState() = default;

    void setContext(IUnit* inContext);

    virtual void pAttack(IUnit* inTarget) = 0;
    virtual void pTakeAttack(IUnit* inForward) = 0;

protected:
    // HINT: IAttack* : pAttack/mAttack ?????
    // HINT: its possible to move hp/mp/pAttackPoint etc in IState ?????
    // HINT: its possible to make alter state for Undeads ???
    IUnit* m_context;
};