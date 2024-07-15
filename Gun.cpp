#include "Gun.h"

using namespace std;

Gun::Gun(string manufacturer, string caliber) 
{
	this->manufacturer = manufacturer;
	this->caliber = caliber;
}

string Gun::getManufacturer()
{
	return this->manufacturer;
}

string Gun::getCaliber()
{
	return this->caliber;
}