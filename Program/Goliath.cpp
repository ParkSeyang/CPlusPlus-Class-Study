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
	cout << "machine gun Attack !(����) : " << attack << endl;
	cout << "Aerial Missile Attack ! (����) : " << attack + 8 << endl;
	cout << "defense : " << defense << endl;
}
