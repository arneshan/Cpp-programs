#include<iostream>
#include<string>
#include "Hurricane.h"

using namespace std;

//parameterized constructor
Hurricane::Hurricane (int bdate, string sname, int c, int w, int p, string lf)
{
	formedIn = bdate;
	Hname = sname;
	category = c;
	wind = w;
	pressure = p;
	landfall = lf;
}
//default constructor
Hurricane::Hurricane()
{
	formedIn = 2021;
	Hname = "Nicholas";
	category = 1;
	wind = 70;
	pressure = 998;
	landfall = "Gulf of Mexico";
}
// print hurricane details
void Hurricane::printHurricane() {
	cout << " The year is " << formedIn << endl;
	cout << " Hurricane name is " << Hname << endl;
	cout << " Category " << category << endl;
	cout << " Wind " << wind << endl;
	cout<< " Pressure is " << pressure << endl;
	cout<< " Landfall in " << landfall << endl;
}
// strongest hurricane 
bool Hurricane::strongerThan(Hurricane h1)
{
	if (category >= h1.category)
		return true;
	else return false;
};

void Hurricane::setFormedIn(int bdate)
{
	formedIn = bdate;
}

void Hurricane::setHname(string sname)
{
	Hname = sname;
}

void Hurricane::setCategory(int c) {
	category = c;
}

void Hurricane::setWind(int w)
{
	wind = w;
}
void Hurricane::setPressure(int p)
{
	pressure = p;
}

void Hurricane::setLand(string lf)
{
	landfall = lf;
}

int Hurricane::getFormedIn()
{
	return formedIn;
}

string Hurricane::getHname()
{
	return Hname;
}

int Hurricane::getCategory()
{
	return category;
}

int Hurricane::getWind()
{
	return wind;
}
int Hurricane::getPressure()
{
	return pressure;
}
string Hurricane::getLandfall()
{
	return landfall;
}

// default destructor
Hurricane::~Hurricane()
{

}