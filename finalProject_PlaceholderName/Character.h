#pragma once
#include <string>
#include <Vector>
#include "Skill.h"

using namespace std;

class Character
{
	string name;
	int healthpoints;
	int attack;
	int defense;
	int speed;
	int critRate;
	int critDamage;
	int level;

	vector<Skill> skills;
public:
	Character(string, int, int, int, int, int, int, int);
	void virtual setSkills(Skill, Skill, Skill) = 0;
};
