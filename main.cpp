
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
	vector<Gun*> gunCabinet;
	gunCabinet.push_back(&revolver);
	gunCabinet.push_back(&pistol);

	/* Testcase 3 - Iterator over dynamic array (vector object created in testcase 2) */
	cout << "My Gun Cabinet Contains:" << endl;
	vector<Gun*>::iterator it = gunCabinet.begin();
	for (;it != gunCabinet.end(); ++it)
		(*it)->print();

	/* Array of base class objects */
	//Gun* gunCabinet[] = { &revolver, &pistol };
	//int numGuns = sizeof(gunCabinet) / sizeof(gunCabinet[0]);
	//for (int i = 0; i < numGuns; i++)
		//gunCabinet[i]->print();

	return 0;
}