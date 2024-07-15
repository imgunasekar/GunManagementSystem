#pragma once

#include<iostream>
#include<string>

class Gun 
{
	private:
		std::string manufacturer;
		std::string caliber;

	protected:
		std::string getManufacturer();
		std::string getCaliber();

	public:
		Gun(std::string manufacturer, std::string caliber);
		virtual void print() = 0;
};