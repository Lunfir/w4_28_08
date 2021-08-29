#include "Werewolf.h"
#include "HumanState.h"
#include "WolfState.h"

#define HP_MULT_INCREASE 1.25
#define HP_MULT_DECREASE 0.75

Werewolf::Werewolf(const std::string& inName, int inHp, int inPAttack)
    : IUnit(inName, inHp, inPAttack
    , std::make_unique<HumanState>())
{

}

void Werewolf::pAttack(IUnit* inTarget)
{
    m_state->pAttack(inTarget);
}

void Werewolf::pTakeAttack(IUnit* inForward)
{
    m_state->pTakeAttack(inForward);
}

void Werewolf::transform()
{
    auto* state = dynamic_cast<HumanState*>(m_state.get());

    if (state == nullptr)
    {
        // we are in WolfState ---> has to switch to HumanState
        switchState(std::make_unique<HumanState>());
        this->m_hp *= HP_MULT_DECREASE;
    }
    else
    {
        // we are in HumanState ----> has to switch to WolfState
        switchState(std::make_unique<WolfState>());
        this->m_hp *= HP_MULT_INCREASE;
    }
}