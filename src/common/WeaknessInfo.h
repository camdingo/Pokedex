#pragma once

class WeaknessInfo {
public:
	//default contructor, contructor, destructor
	WeaknessInfo();
	WeaknessInfo(	double agnormal, double agfire, double agwater, double agelectric, double aggrass, double agice, double agfight, double agpoison,
					double agground, double agflying, double agpsychic, double agbug, double agrock, double agghost, double agdragon, double agdark,
					double agsteel, double agfairy);
	~WeaknessInfo();

	//setters
	void setAgainstNormal(double agnomral) { _againstNormal = agnomral; }
	void setAgainstFire(double agfire) { _againstFire = agfire; }
	void setAgainstWater(double agwater) { _againstWater = agwater; }
	void setAgainstElectric(double agelectric) { _againstElectric = agelectric; }
	void setAgainstGrass(double agggrass) { _againstGrass = aggrass; }
	void setAgainstIce(double agice) { _againstIce = agice; }
	void setAgainstFight(double agfight) { _againstFight = agfight; }
	void setAgainstPoison(double agpoison) { _againstPoison = agpoison; }
	void setAgainstGround(double agground) { _againstGround = agground; }
	void setAgainstFlying(double agflying) { _againstFlying = agflying; }
	void setAgainstPsychic(double agpsychic) { _againstPsychic = agpsychic; }
	void setAgainstBug(double agbug) { _againstBug = agbug; }
	void setAgainstRock(double agrock) { _againstRock = agrock; }
	void setAgainstGhost(double agghost) { _againstGhost = agghost; }
	void setAgainstDragon(double agdragon) { _againstDragon = agdragon; }
	void setAgainstDark(double agdark) { _againstDark = agdark; }
	void setAgainstSteel(double agsteel) { _againstSteel = agsteel; }
	void setAgainstFairy(double agfairy) { _againstFairy = agfairy; }

	//getters
	double getAgainstNormal() { return _againstNormal; }
	double getAgainstFire() { return _againstFire; }
	double getAgainstWater() { return _againstWater; }
	double getAgainstElectric() { return _againstElectric; }
	double getAgainstGrass() { return _againstGrass; }
	double getAgainstIce() { return _againstIce; }
	double getAgainstFight() { return _againstFight; }
	double getAgainstPoison() { return _againstPoison; }
	double getAgainstGround() { return _againstGround; }
	double getAgainstFlying() { return _againstFlying; }
	double getAgainstPsychic() { return _againstPsychic; }
	double getAgainstBug() { return _againstBug; }
	double getAgainstRock() { return _againstRock; }
	double getAgainstGhost() { return _againstGhost; }
	double getAgainstDragon() { return _againstDragon; }
	double getAgainstDark() { return _againstDark; }
	double getAgainstSteel() { return _againstSteel; }
	double getAgainstFairy() { return _againstFairy; }
	
private:
	//assignments
	double _againstNormal;               //(Denotes the multiplier applied when damage is taken from an attack of a ___ type pokemon)
	double _againstFire;
	double _againstWater;
	double _againstElectric;
	double _againstGrass;
	double _againstIce;
	double _againstFight;
	double _againstPoison;
	double _againstGround;
	double _againstFlying;
	double _againstPsychic;
	double _againstBug;
	double _againstRock;
	double _againstGhost;
	double _againstDragon;
	double _againstDark;
	double _againstSteel;
	double _againstFairy;
};