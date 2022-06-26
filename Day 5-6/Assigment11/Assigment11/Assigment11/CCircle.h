#pragma once
#include"Cshape.h"
class CCircle :public CShape
{
	private:
		int radium;
	public:
		void draw(int x, int y, HDC device_context);
		CCircle(int I_color, int I_radium);
};

