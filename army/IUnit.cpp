#include "IUnit.h"
#include "IState.h"

IUnit::IUnit(const std::string& inName
        , int inHp
        , int inPAttack
        , std::unique_ptr<IState> inState)
    : m_name(inName)
    , m_hp(inHp)
    , m_pAttack(inPAttack)
{
    switchState(std::move(inState));
}

const std::string& IUnit::getName() const
{
    return this->m_name;
}

void IUnit::setHp(const int inHp)
{
    this->m_hp = inHp;
}

const int IUnit::getHp() const
{
    return this->m_hp;
}

void IUnit::setPAttack(const int inPAttack)
{
    this->m_pAttack = inPAttack;
}

const int IUnit::getPAttack() const
{
    return this->m_pAttack;
}

void IUnit::switchState(std::unique_ptr<IState> inState)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->m_state = std::move(inState);
    this->m_state->setContext(this);
}

void IUnit::print() const
{
    std::cout   << "----------------\n"
                << "name:  " << m_name << "\n"
                << "hp:    " << m_hp << "\n"
                << "att:   " << m_pAttack << "\n"
                << "state: " << typeid(*m_state).name()
                << std::endl;
}
