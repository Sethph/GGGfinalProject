#pragma once
#include <String>

using namespace std;

class Skill
{
private:
	string skillName;
	string description;
	int cooldown;

public:
	Skill(string, string, int);
};

