/*-------------------------------------------------------
This is the implementation for class Pizza. The interface
is in the file pizza.h

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include "pizza.h"

using namespace std;

const int SMALL = 1, MEDIUM = 2, LARGE = 3, DEEP_DISH = 4, HAND_TOSSED = 5, PAN = 6;

void Pizza::setSize(int newSize)
{
	if (newSize == SMALL || newSize == MEDIUM || newSize == LARGE)
		size = newSize;
	else
	{
		cout<<"Invalid argument in mutator function: Aborting program.";
		exit(1);
	}
}

void Pizza::setType(int newType)
{
	if (newType == DEEP_DISH || newType == HAND_TOSSED || newType == PAN)
		type = newType;
	else
	{
		cout<<"Invalid argument in mutator function: Aborting program.";
		exit(1);
	}
}

void Pizza::setNumberOfToppings(int newNumberOfToppings)
{
	if (newNumberOfToppings > 0)
		numberOfToppings = newNumberOfToppings;
	else
	{
		cout<<"Invalid argument in mutator function: Aborting progarm.";
		exit(1);
	}
}

int Pizza::getSize()
{
	return size;
}

int Pizza::getType()
{
	return type;
}

void Pizza::description()
{
	cout<<"Your pizza type: ";

	if(type == DEEP_DISH)
		cout<<"Deep Dish\n";
	else if (type == HAND_TOSSED)
		cout<<"Hand Tossed\n";
	else 
		cout<<"Pan\n";

	cout<<"Your pizza size: ";

	if (size == LARGE)
		cout<<"Large\n";
	else if(size == MEDIUM)
		cout<<"Medium\n";
	else if (size == SMALL)
		cout<<"Small\n";
}

double Pizza::computePrice()
{
	if (size == SMALL)
		return 10.0 + (2.0*static_cast<double>(numberOfToppings));
	else if (size == MEDIUM)
		return 14.0 + (2.0*static_cast<double>(numberOfToppings));
	else if (size == LARGE)
		return 17.0 + (2.0*static_cast<double>(numberOfToppings));
    else
        return 0.0;
}
