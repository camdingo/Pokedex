#pragma once

class AbilitiesInfo {
public:
	//contructor, default constructor, destructor
	AbilitiesInfo();
	AbilitiesInfo(int abilnum, string const& abil1, string const& abil1, string const& abilhid);
	~AbilitiesInfo();

	//setters
	void setAbilitiesNumber(int abilnum) { _abilitiesNumber = abilnum; }
	void setAbility1(string abil1) { _ability1 = abil1; }
	void setAbility2(string abil2) { _ability2 = abil2; }
	void setAbilityHidden(string abilhid) { _abilityHidden = abilhid; }

	//getters
	int getAbilitiesNumber() { return _abilitiesNumber; }
	string getAbility1() { return _ability1; }
	string getAbility2() { return _ability2; }
	string getAbilityHidden() { return _abilityHiddden; }

private:
	//assignments
	int _abilitiesNumber;            //The number of abilities of the Pokemon
	string _ability1;                //Name of the first Pokemon ability
	string _ability2;                //Name of the second Pokemon ability if any
	string _abilityHidden;           //Name of the hidden Pokemon ability if any
};