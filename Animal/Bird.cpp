#include "Bird.h"

Bird::Bird(string type, float weight, float speed, string habitat, string color, float flyHeight) :Animal(type, weight, speed, habitat, color) {
	SetFlyHeight(flyHeight);
}

void Bird::SetFlyHeight(float flyHeight){
	if (flyHeight < 0)
		flyHeight = 1;
	this->flyHeight = flyHeight;
}

void Bird::Show() const{
	Animal::Show();
	cout << "Fly height: " << flyHeight << endl;
}

void Bird::Say() const{
	cout << "*Chirping*\n";
}

void Bird::Fly() const{
	cout << "Flying at " << flyHeight << endl;
}

float Bird::GetFlyHeight() const{
	return flyHeight;
}


