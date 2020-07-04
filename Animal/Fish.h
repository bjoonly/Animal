#pragma once
#include "Animal.h"
class Fish : public Animal{
	float depth;
public:
	Fish(string type, float weight, float speed, string habitat, string color, float depth);
	void SetDepth(float depth);
	void Swim()const;
	void Show()const;
	void Say()const;
	float GetDepth()const;

};

