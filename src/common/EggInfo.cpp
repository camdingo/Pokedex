#include <iostream>
#include <string>
#include "EggInfo.h"
using namespace std;

EggInfo::EggInfo()
	: _eggTypeNumber(0)
	, _eggType1("")
	, _eggType2("")
	, _percentageMale(0.0)
	, _eggCycles(0)
{

}

EggInfo::EggInfo(int eggtypenum, string const& eggtype1, string const& eggtype2,
	double percentmale, int eggcycles)
	: _eggTypeNumber(eggtypenum)
	, _eggType1(eggtype1)
	, _eggType2(eggtype2)
	, _percentageMale(percentmale)
	, _eggCycles(eggcycles)
{

}

