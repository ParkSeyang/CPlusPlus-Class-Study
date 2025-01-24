#pragma once
#include "Terran.h"

class SiegeTank : public Terran
{
public:
	SiegeTank();
	virtual void Stats() override;
	// void GroundAttack()
	// {
	// 	cout << "Akrasia Cannon Attack :  damage" << attack << endl;
	// }
	// void SiegeMode()
	// {
	// 	cout << "Siege Mode Cannon Attack :  damage" << attack << endl;
	// }
};