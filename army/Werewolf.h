#pragma once

#include <iostream>

#include "IUnit.h"

class Werewolf : public IUnit
{
public:
    Werewolf(const std::string& inName
        , int inHp
        , int inPAttack);

    virtual ~Werewolf() = default;

    void pAttack(IUnit* inTarget) override;
    void pTakeAttack(IUnit* inForward) override;

    void transform();
};