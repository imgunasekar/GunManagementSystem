#pragma once

#include "HandGun.h"

class Revolver : public HandGun 
{
	private: 
		bool singleAction;
		int numberOfRounds;

		std::string getStringAction();

	public:
		/* Constructor */
		Revolver(std::string manufacturer, std::string caliber, bool laser, bool singleAction);
		
		/* Getters */
		bool getAction();
		int getNumOfRounds();

		/* Setters */
		void setAction(bool singleAction);
		void setNumOfRounds(int numOfRounds);


		/* virtual function overriden from base class */
		void print();
};