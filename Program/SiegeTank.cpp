#include "SiegeTank.h"


SiegeTank::SiegeTank()
{
	health = 150;
	attack = 30;
	defense = 1;
	cout << "Create Siege Tank ! " << endl;
}

void SiegeTank::Stats()
{
	cout << "Health : " << health << endl;
	cout << "Akrasia Cannon Attack (지상) : " << attack << endl;
	cout << "Siege Mode Cannon Attack(시즈모드) : " << attack + 70 << endl;
	cout << "defense : " << defense << endl;
}
