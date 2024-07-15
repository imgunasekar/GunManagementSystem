
#include "HandGun.h"

using namespace std;

HandGun::HandGun(string manufacturer, string caliber, string grips, string sights, bool laser) :
	Gun(manufacturer, caliber)
{
	this->grips = grips;
	this->sights = sights;
	this->laser = laser;
}

string HandGun::getGrips()
{
	return this->grips;
}

string HandGun::getSights()
{
	return this->sights;
}

string HandGun::getLaser()
{
	return this->laser == false ? "no laser" : "laser";
}

void HandGun::setGrips(std::string grips)
{
	this->grips = grips;
}

void HandGun::setSights(std::string sights)
{
	this->sights = sights;
}

void HandGun::setLaser(bool laser)
{
	this->laser = laser;
}
