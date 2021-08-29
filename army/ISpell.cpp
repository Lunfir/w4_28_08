#include "ISpell.h"

ISpell::ISpell(SPELL inName, const int inCost)
    : m_name(inName)
    , m_cost(inCost)
{

}

const int ISpell::getCost() const
{
    return m_cost;
}

void ISpell::print() const
{
    std::cout   << "---------\n"
                << "spell: " << m_name
                << std::endl;
}