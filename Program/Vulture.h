#pragma once
#include"Terran.h"

class Vulture : public Terran
{
public:
	Vulture();
	void Stats() override;
	// void GroundAttack()
	// {
	// 	cout << "Attack ! :  damage" << attack << endl;
	// }
};