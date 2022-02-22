#pragma once

class BasicInfo {
public:
	//default contructor, contructor, destructor
	BasicInfo();
	BasicInfo(	int pokenum, string const& engname, string const& germname, string const& japname,
				int gen, string const& stat, string const& speci, int typenum, string const& type1, 
				string const& type2);
	~BasicInfo();

	//setters
	void setPokedexNumber(int pokenum) { _pokedexNumber = pokenum; }
	void setEnglishName(string const& engname) { _setEnglishName = engname; }
	void setGermanName(string const& germname) { _germanName = germname; }
	void setJapaneseGame(string const& japname) { _japaneseName = japname; }
	void setGeneration(int gen) { _generation = gen; }
	void setStatus(string const& stat) { _status = stat; }
	void setSpecies(string const& speci) { _species = speci; }
	void setTypeNum(string const& typenum) { _typeNumber = typenum; }
	void setType1(string const& type1) { _type1 = type1; }
	void setType2(string const& type2) { _type2 = type2; }

	//getters
	int getPokedexNumber() { return _pokedexNumber; }
	string getEnglishName() { return _englishName; }
	string getGermanName() { return _germanName; }
	string getJapaneseName() { return _japaneseName; }
	int getGeneration() { return _generation; }
	string getStatus() { return _status; }
	string getSpecies() { return _species; }
	int getTypeNumber() { return _typeNumber; }
	string getType1() { return _type1; }
	string getType2() { return _type2; }

private:
	//assignments 
	int _pokedexNumber;           //(The entry number of the Pokemon in the National Pokedex)
	string _englishName;          //(The English name of the Pokemon)
	string _germanName;           //(The German name of the Pokemon)
	string _japaneseName;         //(The Original Japanese name of the Pokemon)
	int _generation;              //(The numbered generation which the Pokemon was first introduced)
	string _status;               //(Denotes if the Pokemon is normal, sublegendary, legendary or mythical)
	string _species;              //(The Categorie of the Pokemon)
	int _typeNumber;              //(Number of types that the Pokemon has)
	string _type1;                //(The Primary Type of the Pokemon)
	string _type2;                //(The Secondary Type of the Pokemon if it has it)
};