#pragma once

#include <iostream>

#include "IUnit.h"

class Soldier : public IUnit
{
public:
    Soldier(const std::string& inName
        , int inHp
        , int inPAttack);

    virtual ~Soldier() = default;

    void pAttack(IUnit* inTarget) override;
    void pTakeAttack(IUnit* inForward) override;
};
