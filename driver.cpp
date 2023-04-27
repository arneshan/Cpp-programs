#include "Storm.h"
#include "Unsorted.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
	Storm First, Any;
	Storm Second(" Isabel", 1, 2003, "Vinginia");
	Storm Third("Zeta", 2, 2020, "Mississippi");

	Unsorted Storms;

	Storms.InsertItem(First);
	Storms.InsertItem(Second);
	Storms.InsertItem(Third);


	cout << "List's length: " << Storms.LengthIs() << endl;

	Storm item;

	Storms.ResetList();
	for (int i = 0; i < Storms.LengthIs(); i++) {
		Storms.GetNextItem(item);
		item.Print();
	}

	bool found = true;
	Storm D("Danny", 1, 1997, "Lousiana");
	Storms.RetrieveItem(D, found);
	cout << " Found " << endl;
	Storms.InsertItem(D);

	Storms.ResetList();
	int i = 0;
	while (i < Storms.LengthIs()) {
		Storms.GetNextItem(item);
		if (item.getScategory() == 1) {
			Storms.DeleteItem(item);
		}
		else {
			i++;
		}
	}

	Storms.LengthIs();
	cout << "List's Length " << Storms.LengthIs() << endl;

	Storms.ResetList();
	for (int i = 0; i < Storms.LengthIs(); i++) {
		Storms.GetNextItem(item);
		item.Print();
	}

	system("pause");
	return 0;

}