#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <boost/program_options.hpp>
using namespace std;

namespace po = boost::program_options;

class basic_info {
private:
	int pokedex_number;           //(The entry number of the Pokemon in the National Pokedex)
	string english_name;          //(The English name of the Pokemon)
	string german_name;           //(The German name of the Pokemon)
	string japanese_name;         //(The Original Japanese name of the Pokemon)
	int generation;               //(The numbered generation which the Pokemon was first introduced)
	string status;                //(Denotes if the Pokemon is normal, sublegendary, legendary or mythical)
	string species;               //(The Categorie of the Pokemon)
	int type_number;              //(Number of types that the Pokemon has)
	string type_1;                //(The Primary Type of the Pokemon)
	string type_2;                //(The Secondary Type of the Pokemon if it has it)
public:
	basic_info() {
		pokedex_number = 0;
		english_name = "null";
		german_name = "null";
		japanese_name = "null";
		generation = 0;
		status = "null";
		species = "null";
		type_number = 0;
		type_1 = "null";
		type_2 = "null";
	}
	~basic_info();
	void set_basicinfo(int pokenum, string engname, string germname, string japname, int gen, string stat, string speci, int typenum, string type1, string type2) {
		pokedex_number = pokenum;
		english_name = engname;
		german_name = germname;
		japanese_name = japname;
		generation = gen;
		status = stat;
		species = speci;
		type_number = typenum;
		type_1 = type1;
		type_2 = type2;
	}
	void get_basicInfo
};

class size_info {
private:
	int height_m;                   //(Height of the Pokemon in meters)
	int weight_kg;                  //(The Weight of the Pokemon in kilograms)
public:
	size_info() {
		height_m = 0;
		weight_kg = 0;
	}
	~size_info();
};

class abilities_info {
private:
	int abilities_number;            //(The number of abilities of the Pokemon)
	string ability_1;                //(Name of the first Pokemon ability)
	string ability_2;                //(Name of the second Pokemon ability if any)
	string ability_hidden;           //(Name of the hidden Pokemon ability if any)
public:
	abilities_info() {
		abilities_number = 0;
		ability_1 = "null";
		ability_2 = "null";
		ability_hidden = "null";
	}
	~abilities_info();
};

class stats_info {
private:
	int hp;                           //(The Base HP of the Pokemon)
	int attack;                       //(The Base Attack of the Pokemon)
	int defense;                      //(The Base Defense of the Pokemon)
	int sp_attack;                    //(The Base Special Attack of the Pokemon)
	int sp_defense;                   //(The Base Special Defense of the Pokemon)
	int speed;                        //(The Base Speed of the Pokemon)
	int catch_rate;                   //(Catch Rate of the Pokemon)
	int base_friendship;              //(Base Friendship of the Pokemon)
	int base_experience;              //(Base experience of a wild Pokemon when catched)
	int growth_rate;                  //(The Growth Rate of the Pokemon)
public:
	stats_info() {
		hp = 0;
		attack = 0;
		defense = 0;
		sp_attack = 0;
		sp_defense = 0;
		speed = 0;
		catch_rate = 0;
		base_friendship = 0;
		base_experience = 0;
		growth_rate = 0;
	}
	~stats_info();
};

class egg_info {
private:
	int egg_type_number;              //(Number of groups where a Pokemon can hatch)
	string egg_type_1;                //(Name of the first egg group where a Pokemon can hatch)
	string egg_type_2;                //(Name of the second egg group where a Pokemon can hatch if any)
	double percentage_male;           //(The percentage of the species that are male.Blank if the Pokemon is genderless or the info is unknown)
	int egg_cycles;                   //(The number of cycles(255 - 257 steps) required to hatch an egg of the Pokemon)
public:
	egg_info() {
		egg_type_number = 0;
		egg_type_1 = "null;";
		egg_type_2 = "null;";
		percentage_male = 0.0;
		egg_cycles = 0;
	}
	~egg_info();
};

class weakness_info {
private:
	double against_normal; //(Denotes the multiplier applied when damage is taken from an attack of a ___ type pokemon)
	double against_fire;
	double against_water;
	double against_electric;
	double against_grass;
	double against_ice;
	double against_fight;
	double against_poison;
	double against_ground;
	double against_flying;
	double against_psychic;
	double against_bug;
	double against_rock;
	double against_ghost;
	double against_dragon;
	double against_dark;
	double against_steel;
	double against_fairy;
public:
	weakness_info() {
		against_normal = 0.0;
		against_fire = 0.0;
		against_water = 0.0;
		against_electric = 0.0;
		against_grass = 0.0;
		against_ice = 0.0;
		against_fight = 0.0;
		against_poison = 0.0;
		against_ground = 0.0;
		against_flying = 0.0;
		against_psychic = 0.0;
		against_bug = 0.0;
		against_rock = 0.0;
		against_ghost = 0.0;
		against_dragon = 0.0;
		against_dark = 0.0;
		against_steel = 0.0;
		against_fairy = 0.0;
	}
	~weakness_info();
};

int main(int argc, char** argv)
{
	ifstream pokeDex;
	pokeDex.open("pokedex_(Update_5.20).csv");

	vector<basic_info> info_poke;
	vector<size_info> size_poke;
	vector<abilities_info> abilities_poke;
	vector<stats_info> stats_poke;
	vector<egg_info> egg_poke;
	vector<weakness_info> weakness_poke;


	while (getline(pokeDex, pokemonStorage, ",")) {


		pokemonStorage = "";
	}


	return 0;
}