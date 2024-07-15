#include "Pistol.h"

using namespace std;

Pistol::Pistol(string manufacturer, string caliber, bool laser, bool semiauto) :
	HandGun(manufacturer, caliber, "manufacturers grips", "6 shots", laser)
{
	this->semiauto = semiauto;
}

bool Pistol::getSemiauto()
{
	return this->semiauto;
}

string Pistol::getStringSemiauto()
{
	return this->semiauto == false ? "no-semi" : "semi-auto";
}

void Pistol::setSemiautor(bool semiauto)
{
	this->semiauto = semiauto;
}

void Pistol::print()
{
	cout << "Pistol: ";
	cout << this->getManufacturer() << ", ";
	cout << this->getCaliber() << ", ";
	cout << this->getStringSemiauto() << ", ";
	cout << this->getGrips() << ", ";
	cout << this->getLaser() << ", ";
	cout << this->getSights() << endl;
}