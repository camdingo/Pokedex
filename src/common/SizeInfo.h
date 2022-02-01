#pragma once

class SizeInfo {
public:
	//contructor, default constructor, destructor
	SizeInfo();
	SizeInfo(	double height, double weight);
	~SizeInfo();

	//setters
	void setHeight(double height) { _height = height; }
	void setWeight(double weight) { _weight = weight; }

	//getters
	double getHeight() { return _height; }
	double getWeight() { return _weight; }

private:
	//assignments
	double _height;     //Height of the Pokemon in meters
	double _weight;     //The Weight of the Pokemon in kilograms
};