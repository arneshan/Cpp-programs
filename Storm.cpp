#include "Storm.h"
#include <iostream>
#include <string>
using namespace std;

Storm::Storm(string hname, int cat, int sdate, string lf)
{
	Sname = hname;
	Scategory = cat;
	SformedIn = sdate;
	Slandfall = lf;
}

Storm::Storm()
{
	Sname = "Nicholas ";
	Scategory = 1;
	SformedIn = 2021;
	Slandfall = " Texas ";
}

void Storm::Print() {
	cout << " Storm name is " << Sname << endl;
	cout << " Category " << Scategory << endl;
	cout << " The year is " << SformedIn << endl;
	cout << " Landfall in " << Slandfall << endl;
}

RelationType Storm::ComparedTo(Storm aStorm)const
{
	if (Sname < aStorm.Sname)
		return LESS;
	else if (Sname > aStorm.Sname)
		return GREATER;
	else return EQUAL;
}

void Storm::setSname(string hname)
{
	Sname = hname;
}

void Storm::setScategory(int cat)
{
	Scategory = cat;
}

void Storm::setSformedIn(int sdate)
{
	SformedIn = sdate;
}

void Storm::setSlandfall(string lf)
{
	Slandfall = lf;
}

string Storm::getSname()
{
	return Sname;
}

int Storm::getScategory()
{
	return Scategory;
}

int Storm::getSformedIn()
{
	return SformedIn;
}

string Storm::getSlandfall()
{
	return Slandfall;
}