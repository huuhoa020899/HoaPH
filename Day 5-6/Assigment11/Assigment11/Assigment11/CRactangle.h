#pragma once
#include "Cshape.h"
class CRactangle :public CShape
{
protected:
	int width;
	int height;
public:
	void draw(int x, int y, HDC device_context);
	CRactangle(int I_color, int I_width, int I_height);
	CRactangle(){}
};

