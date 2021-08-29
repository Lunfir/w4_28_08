#include "Soldier.h"
#include "HumanState.h"

Soldier::Soldier(const std::string& inName, int inHp, int inPAttack)
    : IUnit(inName, inHp, inPAttack
    , std::make_unique<HumanState>())
{

}

void Soldier::pAttack(IUnit* inTarget)
{
    m_state->pAttack(inTarget);
}

void Soldier::pTakeAttack(IUnit* inForward)
{
    m_state->pTakeAttack(inForward);
}