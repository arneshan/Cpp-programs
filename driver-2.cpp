#include <iostream>
#include<string>
#include"Hurricane.h"

using namespace std;

int main(void)
{
// Hurricane Ike, Harvey, Katrina
	Hurricane Ike(2008, "Ike", 2, 110, 935, "Galveston Island"); //Hurricane Ike details
	Ike.printHurricane(); // print Ike details
	cout << endl;
	Hurricane Harvey(2017, "Harvey", 4, 130, 937, "Rockport");//Hurricane Harvey details
	Harvey.printHurricane(); // print Harvey details
	cout << endl;
	Hurricane Katrina(2005, "Katrina", 5, 175, 902, "Aventura"); //Hurricane Katrina details
	Katrina.printHurricane(); // print Katrina details
	cout << endl;

	// the strongest out of the 3 hurricanes
	
	
	
		bool h1 = Ike.strongerThan(Harvey); // Ike stronger than Harvey
		
	
	
		bool h2 = Katrina.strongerThan(Harvey); // Katrina stronger than Harvey
		if (h1 == false && h2 == true)
		{
			cout << Katrina.getHname() << " is strongest" << endl;

		}
		else {
			if (h1 == true && h2 == false)
			{
				cout << Ike.getHname() << " is strongest" << endl;

			}
			else {
				cout << Harvey.getHname() << " is strongest" << endl;
			}
		}

	return 0;
}