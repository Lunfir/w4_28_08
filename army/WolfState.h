#pragma once

#include <iostream>

#include "IState.h"

class WolfState : public IState
{
public:
    void pAttack(IUnit* inTarget);
    void pTakeAttack(IUnit* inForward);
};