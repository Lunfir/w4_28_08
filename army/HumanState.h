#pragma once

#include <iostream>

#include "IState.h"

class HumanState : public IState
{
public:
    void pAttack(IUnit* inTarget);
    void pTakeAttack(IUnit* inForward);
};