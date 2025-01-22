#include "Terran.h"

Terran::Terran()
{
	attack = 0;
	health = 0;
	defense = 0;
	
}

void Terran::Stats()
{
	cout << "Health : " << health << endl;
	cout << "Attack : " << attack << endl;
	cout << "defense : " << defense << endl;
}
