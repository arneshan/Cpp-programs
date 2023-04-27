#pragma once
#include <iostream>
#include<string>
using namespace std;
enum RelationType{ LESS, EQUAL, GREATER };
class Storm
{
public:
	Storm();
	Storm(string hname, int cat, int sdate, string lf);
	void setSname(string hname);
	void setScategory(int cat);
	void setSformedIn(int sdate);
	void setSlandfall(string lf);

	string getSname();
	int getScategory();
	int getSformedIn();
	string getSlandfall();
	void Print();
	RelationType ComparedTo(Storm astorm)const;

private:
	string Sname;
	int Scategory;
	int SformedIn;
	string Slandfall;
};

