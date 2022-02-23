#include <iostream>
#include <string>
#include "WeaknessInfo.h"
using namespace std;

WeaknessInfo::WeaknessInfo()
	: _againstNormal(0.0)
	, _againstFire(0.0)
	, _againstWater(0.0)
	, _againstElectric(0.0)
	, _againstGrass(0.0)
	, _againstIce(0.0)
	, _againstFight(0.0)
	, _againstPoison(0.0)
	, _againstGround(0.0)
	, _againstFlying(0.0)
	, _againstPsychic(0.0)
	, _againstBug(0.0)
	, _againstRock(0.0)
	, _againstGhost(0.0)
	, _againstDragon(0.0)
	, _againstDark(0.0)
	, _againstSteel(0.0)
	, _againstFairy(0.0)
{

}

WeaknessInfo::WeaknessInfo(double agnormal, double agfire, double agwater, double agelectric, double aggrass, double agice, double agfight, double agpoison,
	double agground, double agflying, double agpsychic, double agbug, double agrock, double agghost, double agdragon, double agdark,
	double agsteel, double agfairy)
	: _againstNormal(agnormal)
	, _againstFire(agfire)
	, _againstWater(agwater)
	, _againstElectric(agelectric)
	, _againstGrass(aggrass)
	, _againstIce(agice)
	, _againstFight(agfight)
	, _againstPoison(agpoison)
	, _againstGround(agground)
	, _againstFlying(agflying)
	, _againstPsychic(agpsychic)
	, _againstBug(agbug)
	, _againstRock(agrock)
	, _againstGhost(agghost)
	, _againstDragon(agdragon)
	, _againstDark(agdark)
	, _againstSteel(agsteel)
	, _againstFairy(agfairy)
{

}

WeaknessInfo::~WeaknessInfo() { cout << "Destroying" << endl; }