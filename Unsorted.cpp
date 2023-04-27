#include "Storm.h"
#include "Unsorted.h"
#include <iostream>
#include <string>
using namespace std;

Unsorted::Unsorted()
{
	length = 0;
}

bool Unsorted::IsFull() const
{
	return (length == MAX_ITEM);
}

void Unsorted::RetrieveItem(Storm& item, bool& found)
{
	bool moreToSearch;
	int location = 0;

	found = false;
	moreToSearch = (location < length);
	while (moreToSearch && !found)
	{
		switch (item.ComparedTo(info[location]))
		{
		case LESS:
		case GREATER: location++;
			moreToSearch = (location < length);
			break;
		case EQUAL: found = true;
			break;
		}
	}
}

void Unsorted::InsertItem(Storm item)
{
	info[length] = item;
	length++;
}
void Unsorted::DeleteItem(Storm item)
{
	int location = 0;

	while (item.ComparedTo(info[location]) != EQUAL)
		location++;
	info[location] = info[length - 1];
	length--;
}

void Unsorted::ResetList()
{
	currentPos = -1;
}

void Unsorted::GetNextItem(Storm& item)
{
	currentPos++;
	item = info[currentPos];
}

int Unsorted::LengthIs()const
{
	return length;
}