//File: Hurricane.h
//Programmer: Arnesha Nicholas
//Class: Hurricane
//Desciption: This file defines the Hurricane Class.

#include <iostream>
#include <string>
using namespace std;

//class of a Hurricane
class Hurricane
{
public:
	Hurricane();//default constructor
	~Hurricane();//default destructor
	Hurricane(int bdate, string hname, int cat, int w, int p, string lf); //parameterized constructor
	//setters member functions
	void setFormedIn(int bdate);
	void setHname(string hname);
	void setCategory(int c);
	void setWind(int w);
	void setPressure(int p);
	void setLand(string lf);
	//getters member functions
	int getFormedIn();
	string getHname();
	int getCategory();
	int getWind();
	int getPressure();
	string getLandfall();
	//print hurricane
	void printHurricane();
	//stronger hurricane
	bool strongerThan(Hurricane h1);

private:
	//private data members
	int formedIn;
	string Hname;
	int category;
	int wind;
	int pressure;
	string landfall;
};

