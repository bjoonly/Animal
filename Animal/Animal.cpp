#include "Animal.h"

Animal::Animal(string type, float weight,float speed, string habitat, string color):type(type),habitat(habitat),color(color){
	SetSpeed(speed);
	SetWeight(weight);
}

void Animal::SetWeight(float weight){
	if (weight < 0)
		weight = 1;
	this->weight = weight;
}

void Animal::SetSpeed(float speed){
	if (speed < 0)
		speed = 1;
	this->speed = speed;
}

void Animal::SetType(string type){
	this->type = type;
}

void Animal::SetHabitat(string habitat){
	this->habitat = habitat;
}

void Animal::SetColor(string color){
	this->color = color;
}

string Animal::GetType() const
{
	return type;
}

float Animal::GetWeight() const
{
	return weight;
}

float Animal::GetSpeed()const{
	return speed;
}

string Animal::GetHabitat() const
{
	return habitat;
}

string Animal::GetColor() const
{
	return color;
}

void Animal::Say() const{
	cout << "Says something.\n";
}

void Animal::Show() const{
	cout << "Type: " << type << "\nHabitat: " << habitat << "\nColor: " << color  << "\nWeight: " << weight <<
		"\nSpeed: " << speed << endl;
}

void Animal::Move() const{
	cout << "Moving with speed " << speed << endl;
}

