#pragma once

#include<iostream>

using namespace std;

class Paint
{
protected:
	float thickness;

public:
	virtual void Draw() = 0;
};


