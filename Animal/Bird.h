#pragma once
#include "Animal.h"
class Bird : public Animal{
	float flyHeight;
public:
	Bird(string type, float weight, float speed, string habitat, string color, float flyHeight);
	void SetFlyHeight(float flyHeight);
	void Show()const;
	void Say()const;
	void Fly()const;

	float GetFlyHeight()const;
};

