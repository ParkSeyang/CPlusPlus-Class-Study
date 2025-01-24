#include "Vulture.h"

Vulture::Vulture()
{
	health = 80;
	attack = 20;
	defense = 0;
	cout << "Create Vulture ! " << endl;
}
void Vulture::Stats()
{
	cout << "Health : " << health << endl;
	cout << "Shrapnel Grenade Attack (Áö»ó) : " << attack << endl;
	cout << "defense : " << defense << endl;
}