#include <iostream>

#include "ItemType.h"

#include "Unsorted.h"

using namespace std;

int main(void) {
	Unsorted UL;

	ItemType MyDay;
	MyDay.Initialize(14);
	UL.InsertItem(MyDay);

	ItemType MyMonth;
	MyMonth.Initialize(10);
	UL.InsertItem(MyMonth);

	ItemType MyYear;
	MyYear.Initialize(1999);
	UL.InsertItem(MyYear);

	ItemType MyT;
	MyT.Initialize(4235);
	UL.InsertItem(MyT);

	UL.LengthIs();
	cout << " Length is " <<UL.LengthIs()<< endl;
	
	UL.ResetList();
	cout << " List: " << endl;
	ItemType item;

	for (int i = 0; i < UL.LengthIs(); i++)
	{
		UL.GetNextItem(item);
		item.Print();
	}

	bool found;
	UL.RetrieveItem(MyMonth,found);

	UL.DeleteItem(MyT);
	cout << " Delete last 4 digits of TNumber " << endl;
	
	UL.ResetList();
	cout << " Reset list: " << endl;

	for (int i = 0; i < UL.LengthIs(); i++)
	{
		UL.GetNextItem(item);
		item.Print();
	}

	system("pause");

	return 0;
}