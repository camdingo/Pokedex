#pragma once

class StatsInfo {
public:
	//contructor, default constructor, destructor
	StatsInfo();
	StatsInfo(	int hp, int attack, int defense, int spatt, int spdef, int speed,
				int catchrate, int basefriend, int baseexp, int growthrate);
	~StatsInfo();
	
	//setters
	void setHp(int hp) { _hp = hp; }
	void setAttack(int attack) { _attack = attack; }
	void setDefense(int defense) { _defense = defense; }
	void setSpAttack(int spatt) { _spAttack = spatt; }
	void setSpDefense(int spdef) { _spDefense = spdef; }
	void setSpeed(int speed) { _speed = speed; }
	void setCatchRate(int catchrate) { _catchRate = catchrate; }
	void setBaseFriendship(int basefriend) { _baseFriendship = basefriend; }
	void setBaseExperience(int baseexp) { _baseExperience = baseexp; }
	void setGrowthRate(int growthrate) { _growthRate = growthrate; }

	//getters
	int getHp() { return _hp; }
	int getAttack() { return _attack; }
	int getDefense() { return _defense; }
	int getSpAttack() { return _spAttack; }
	int getSpDefense() { return _spDefense; }
	int getSpeed() { return _speed; }
	int getCatchRate() { return _catchRate; }
	int getBaseFriendship() { return _baseFriendship; }
	int getBaseExperience() { return _baseFriendship; }
	int getGrowthRate() { return _growthRate; }


private:
	//assignments
	int _hp;                          //(The Base HP of the Pokemon)
	int _attack;                      //(The Base Attack of the Pokemon)
	int _defense;                     //(The Base Defense of the Pokemon)
	int _spAttack;                    //(The Base Special Attack of the Pokemon)
	int _spDefense;                   //(The Base Special Defense of the Pokemon)
	int _speed;                       //(The Base Speed of the Pokemon)
	int _catchRate;                   //(Catch Rate of the Pokemon)
	int _baseFriendship;              //(Base Friendship of the Pokemon)
	int _baseExperience;              //(Base experience of a wild Pokemon when catched)
	int _growthRate;                  //(The Growth Rate of the Pokemon)
};
