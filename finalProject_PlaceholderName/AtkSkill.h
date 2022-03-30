#pragma once
#include "Skill.h"

class AtkSkill :
    public Skill
{
private:
    int damage;
public:
    AtkSkill(string, string, int);
    int multpliers(int attack);

};

