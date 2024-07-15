#pragma once

#include "HandGun.h"

class Pistol : public HandGun 
{
	private:
		bool semiauto;
		
		std::string getStringSemiauto();

	public:
		/* Construtor */
		Pistol(std::string manufacturer, std::string caliber, bool laser, bool semiauto);

		/* Getter and Setter */
		bool getSemiauto();
		void setSemiautor(bool semiauto);

		/* Virtual function inherited from base class */
		void print();
};