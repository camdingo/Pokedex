#include <iostream>
#include <string>
#include "SizeInfo.h"
using namespace std;

SizeInfo::SizeInfo()
	: _height(0.0)
	, _weight(0.0)
{

}

SizeInfo::SizeInfo(double height, double weight)
	: _height(height)
	, _weight(weight)
{

}

SizeInfo::~SizeInfo() { cout << "Destroying" << endl; }


