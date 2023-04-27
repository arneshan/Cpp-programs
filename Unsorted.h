#pragma once
#include "Storm.h"
using namespace std;

#define MAX_ITEM 5

class Unsorted
{
public:
	Unsorted();
	bool    IsFull() const;
	void    RetrieveItem(Storm& item, bool& found);
	void    InsertItem(Storm  item);
	void    DeleteItem(Storm  item);
	void    ResetList();
	void    GetNextItem(Storm& item);
	int LengthIs() const;

private:
	int length;
	Storm info[MAX_ITEM];
	int currentPos;
};

