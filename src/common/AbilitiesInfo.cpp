#include <iostream>
#include <string>
#include "AbilitiesInfo.h"
using namespace std;

AbilitiesInfo::AbilitiesInfo()
	: _abilitiesNumber(0)
	, _ability1("")
	, _ability2("")
	, _abilityHidden("")
{

}

AbilitiesInfo::AbilitiesInfo(int abilnum, string const& abil1, string const& abil1, string const& abilhid)
	: _abilitiesNumber(abilnum)
	, _ability1(abil1)
	, _ability2(abil2)
	, _abilityHidden(abilhid)
{

}

AbilitiesInfo::~AbilitiesInfo() { cout << "Destroying" << endl; };

