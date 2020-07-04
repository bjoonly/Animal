#pragma once
#include "Animal.h"
class Reptile : public Animal{
	string order;
public:
	Reptile(string type, float weight, float speed, string habitat, string color,string order);
	void Show()const;
	void Say()const;

	string GetOrder()const;

};

