#include <iostream>
#include <string>
#include "BasicInfo.h"
using namespace std;

BasicInfo::BasicInfo()
	: _pokedexNumber(0)
	, _englishName("")
	, _germanName("")
	, _japaneseName("")
	, _generation("")
	, _status(0)
	, _species("")
	, _typeNumber("")
	, _type1("")
	, _type2("")
{

};

BasicInfo::BasicInfo(int pokenum, string const& engname, string const& germname, string const& japname,
	int gen, string const& stat, string const& speci, int typenum, string const& type1, string const& type2)
	: _pokedexNumber(pokenum)
	, _englishName(engname)
	, _germanName(germname)
	, _japaneseName(japname)
	, _generation(gen)
	, _status(stat)
	, _species(speci)
	, _typeNumber(typenum)
	, _type1(type1)
	, _type2(type2)
{

};

BasicInfo::~BasicInfo() { cout << "Destroying"; };
