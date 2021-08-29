#include "WolfState.h"
#include "IUnit.h"

#define HP_MULT_INCREASE 1.25

void WolfState::pAttack(IUnit* inTarget)
{
    inTarget->pTakeAttack(m_context);
    inTarget->switchState(std::make_unique<WolfState>());
    inTarget->setHp(inTarget->getHp() * HP_MULT_INCREASE);
}

void WolfState::pTakeAttack(IUnit* inForward)
{
    // if inForward is SpellCaster : multiply attack points
    int currHp = this->m_context->getHp();

    currHp -= inForward->getPAttack();;
    this->m_context->setHp(currHp);

    // is unit dead
    // this->counterAttack(inForward);
    // inForward->counterAttack();
}
