#include "Fruit.h"

Fruit::Fruit()
{
	Sugarcontent = 0;
}

Fruit::~Fruit()
{
	cout << "과일의 당도는 : "<< Sugarcontent << endl;
}
