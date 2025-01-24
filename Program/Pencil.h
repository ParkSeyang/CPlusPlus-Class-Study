#pragma once
#include"Paint.h"
class Pencil :public Paint
{
public:
	Pencil();

	virtual void Draw() override;
	
	~Pencil();
};

