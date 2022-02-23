#include <iostream>
#include <string>
#include "StatsInfo.h"
using namespace std;

StatsInfo::StatsInfo()
	: _hp(0)
	, _attack(0)
	, _defense(0)
	, _spAttack(0)
	, _spDefense(0)
	, _speed(0)
	, _catchRate(0)
	, _baseFriendship(0)
	, _baseExperience(0)
	, _growthRate(0)
{

}

StatsInfo::StatsInfo(int hp, int attack, int defense, int spatt, int spdef, int speed, 
					 int catchrate, int basefriend, int baseexp, int growthrate)
	: _hp(hp)
	, _attack(attack)
	, _defense(defense)
	, _spAttack(spatt)
	, _spDefense(spdef)
	, _speed(speed)
	, _catchRate(catchrate)
	, _baseFriendship(basefriend)
	, _baseExperience(baseexp)
	, _growthRate(growthrate)
{

}

StatsInfo::~StatsInfo() { cout << "Destroying" << endl; }
