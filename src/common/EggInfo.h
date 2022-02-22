#pragma once

class EggInfo {
public:
	//default contructor, contructor, destructor
	EggInfo();
	EggInfo(	int eggtypenum, string const& eggtype1, string const& eggtype2,
				double percentmale, int eggcycles);
	~EggInfo();

	//setters
	void setEggTypeNumber(int eggtypenum) { _eggTypeNumber = eggtypenum; }
	void setEggType1(string const& eggtype1) { _eggType1 = eggtype1; }
	void setEggType2(string const& eggtype2) { _eggType2 = eggtype2; }
	void setPercentageMale(double percentmale) { _percentageMale = percentmale; }
	void setEggCycles(int eggcycles) { _eggCycles = eggcycles; }

	//getters
	int getEggTypeNumber() { return _eggTypeNumber; }
	string getEggType1() { return _eggType1; }
	string getEggType2() { return _eggType2; }
	double getPercentageMale() { return _percentageMale; }
	int getEggCycles() { return _eggCycles; }

private:
	//assignments
	int _eggTypeNumber;
	string _eggType1;
	string _eggType2;
	double _percentageMale;
	int _eggCycles;
};