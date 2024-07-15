
#include "Gun.h"
#include "Revolver.h"
#include "Pistol.h"
#include<vector>
#include<iterator>

using namespace std;

/* Program starting point and referred as client code */
int main() 
{
	/* Testcase 1 - Create objects of different type guns */
	Revolver revolver("Simth", "0.357", true, true);
	Pistol pistol("Glock", "9mm", false, true);

	/* Testcase 2 - Create array of base pointer and store concrete class objects into it */
	vector<Gun*> guns;
	guns.push_back(&revolver);
	guns.push_back(&pistol);

	/* Testcase 3 - Iterator over dynamic array (vector object created in testcase 2) */
	vector<Gun*>::iterator it = guns.begin();
	for (;it != guns.end(); ++it)
	{
		(*it)->print();
	}

	return 0;
}