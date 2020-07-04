#include "Reptile.h"

Reptile::Reptile(string type, float weight, float speed, string habitat, string color, string order):Animal(type, weight, speed, habitat, color),order(order) {}

void Reptile::Show() const{
	Animal::Show();
	cout << "Order: " << order << endl;
}

void Reptile::Say() const{
	cout << "*Splosh*\n";
}

string Reptile::GetOrder() const{
	return order;
}
