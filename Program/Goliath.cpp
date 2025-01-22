#include "Goliath.h"

Goliath::Goliath()
{
	health = 125;
	attack = 12;
	defense = 1;
	cout << "Create Goliath ! " << endl;
	
}

void Goliath::Stats()
{
	cout << "Health : " << health << endl;
	cout << "machine gun Attack !(지상) : " << attack << endl;
	cout << "Aerial Missile Attack ! (공중) : " << attack + 8 << endl;
	cout << "defense : " << defense << endl;
}
