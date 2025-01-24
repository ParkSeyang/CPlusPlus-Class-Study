#pragma once
#include "Terran.h"
class Goliath : public Terran
{
public:
	Goliath();
	virtual void Stats() override;
	// void GroundAttack()
	// {
	// 	cout << "machine gun Attack ! :  damage" << attack << endl;
	// }
	// void AerialAttack()
	// {
	// 	cout << "Aerial Missile Attack ! : damage" << attack << endl;
	// }
};