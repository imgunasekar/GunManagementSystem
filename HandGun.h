#pragma once

#include "Gun.h"

class HandGun : public Gun 
{
	private:
		std::string grips;
		std::string sights;
		bool laser;

	protected:
		/* Getters to to read private members */
		std::string getGrips();
		std::string getSights();
		std::string getLaser();

		/* Setters to write private members */
		void setGrips(std::string grips);
		void setSights(std::string sights);
		void setLaser(bool laser);

	public:
		HandGun(std::string manufacturer, std::string caliber, std::string grips, std::string sights, bool laser);
		virtual void print() = 0;
};