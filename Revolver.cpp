
#include "Revolver.h"

using namespace std;

Revolver::Revolver(string manufacturer, string caliber, bool laser, bool singleAction) :
	HandGun(manufacturer, caliber, "manufacturers grips", "6 shots", laser) 
{
	this->singleAction = singleAction;
	this->numberOfRounds = 0;
}

string Revolver::getStringAction()
{
	return this->singleAction == false ? "double action" : "single action";
}

bool Revolver::getAction()
{
	return this->singleAction;
}

int Revolver::getNumOfRounds()
{
	return this->numberOfRounds;
}

void Revolver::setAction(bool singleAction)
{
	this->singleAction = singleAction;
}

void Revolver::setNumOfRounds(int numOfRounds)
{
	this->numberOfRounds = numOfRounds;
}

void Revolver::print()
{
	cout << "Revolver: ";
	cout << this->getManufacturer() << ", ";
	cout << this->getCaliber() << ", ";
	cout << this->getSights() << ", ";
	cout << this->getStringAction() << ", ";
	cout << this->getGrips() << ", ";
	cout << this->getLaser() << ", ";
	cout << this->getNumOfRounds() << endl;
}