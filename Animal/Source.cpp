#include"WestAfricanSlenderSnoutedCrocodile.h"
#include"GreatWhiteShark.h"
#include"HouseSparrow.h"
int main() {
	cout << "Animal:\n";
	Animal a("Dog",15,10,"Ukraine","Black");
	a.Show();
	a.Say();
	Bird b("Sparrow", 0.02f, 35, "Europe", "Brown", 150);
	b.Show();
	b.Say();
	cout << "\nFish:\n";
	Fish f("Shark", 2.1f, 25, "Ocean", "Gray", 1.2f);
	f.Show();
	f.Say();
	cout << "\nReptile:\n";
	Reptile r("Frog", 0.5, 20, "Swamp", "Green", "Squamata");
	r.Show();
	r.Say();
	cout << "\nHouse sparrow:\n";
	HouseSparrow h;
	h.Show();
	h.Fly();
	cout << "\nWest African slender-snouted crocodile:\n";
	WestAfricanSlenderSnoutedCrocodile w;
	w.Show();
	w.Move();
	cout << "\nGreat white shark:\n";
	GreatWhiteShark g;
	g.Show();
	g.Swim();
	return 0;
}