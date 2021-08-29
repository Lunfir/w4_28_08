#pragma once

#include <iostream>
#include <memory>
#include <unordered_map>

#include "ISpell.h"

class SpellManager
{
public:
    static SpellManager& instance();

    virtual ~SpellManager() = default;

    ISpell* getSpell(SPELL spell) const;

    static int staticTest;

protected:
    std::unordered_map<SPELL, std::unique_ptr<ISpell>> m_spellBook;

private:
    SpellManager();
    SpellManager(const SpellManager& other) = delete;
    void operator=(const SpellManager& other) = delete;
};
