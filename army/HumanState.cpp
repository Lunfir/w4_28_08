#include "HumanState.h"
#include "IUnit.h"

void HumanState::pAttack(IUnit* inTarget)
{
    inTarget->pTakeAttack(m_context);
}

void HumanState::pTakeAttack(IUnit* inForward)
{
    // is unit dead
    int currHp = this->m_context->getHp();

    currHp -= inForward->getPAttack();;
    this->m_context->setHp(currHp);

    // is unit dead
    // this->counterAttack(inForward);
    // inForward->counterAttack();
}
