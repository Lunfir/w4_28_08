#pragma once

#include <iostream>
#include <memory>

class IState;

class IUnit
{
public:
    IUnit(const std::string& inName
        , int inHp
        , int inPAttack
        , std::unique_ptr<IState> inState);

    virtual ~IUnit() = default;

    const std::string& getName() const;

    void setHp(const int inHp);
    const int getHp() const;

    void setPAttack(const int inPAttack);
    const int getPAttack() const;

    // TODO????
    // reconsider to move these methods to child classes
    void switchState(std::unique_ptr<IState> inState);

    virtual void pAttack(IUnit* inTarget) = 0;
    virtual void pTakeAttack(IUnit* inForward) = 0;
    // counterAttack??????

    void print() const;

protected:
    std::string m_name;
    int m_hp;
    int m_pAttack;

    std::unique_ptr<IState> m_state;
};
