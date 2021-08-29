#include "SpellManager.h"
#include "StarSurgeSpell.h"

int SpellManager::staticTest = 42;

SpellManager& SpellManager::instance()
{
    static SpellManager spellManager;

    return spellManager;
}

ISpell* SpellManager::getSpell(SPELL spell) const
{
    auto search = m_spellBook.find(spell);
    if (search != m_spellBook.end())
    {
        return search->second.get();
    }

    return nullptr;
}

SpellManager::SpellManager()
{
    m_spellBook.emplace(SPELL::StarSurge, std::make_unique<StarSurgeSpell>(4));
}
