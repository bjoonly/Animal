#include "Fish.h"

Fish::Fish(string type, float weight, float speed, string habitat, string color, float depth):Animal(type, weight, speed, habitat, color){
	SetDepth(depth);
}

void Fish::SetDepth(float depth){
	if (depth < 0)
		depth = 1;
	this->depth = depth;
}

void Fish::Swim() const{
	cout << "Swimming at " << depth << endl;
}

void Fish::Show() const{
	Animal::Show();
	cout << "Depth: " << depth << endl;
}

void Fish::Say() const{
	cout << "*Glug*\n";
}

float Fish::GetDepth() const{
	return depth;
}
