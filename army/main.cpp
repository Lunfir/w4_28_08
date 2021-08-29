#include <iostream>

#include "Soldier.h"
#include "Werewolf.h"
#include "SpellManager.h"
#include "IState.h"


int main()
{
    // state change: example of use
    Soldier* soldier = new Soldier("Soldier", 50, 10);
    Werewolf* wolf = new Werewolf("Werewolf", 50, 7);

    wolf->print();

    wolf->pAttack(soldier); // in human state
    soldier->print();

    wolf->transform();      // in wolf state
    wolf->print();

    wolf->pAttack(soldier);
    soldier->print();

    // spell book: example of use
    SpellManager& instance = SpellManager::instance();
    ISpell* spell = instance.getSpell(SPELL::StarSurge);
    spell->print();

    delete soldier;
    delete wolf;

    return 0;
}