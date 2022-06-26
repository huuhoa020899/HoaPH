#pragma once
#include"Cshape.h"
class CLine :public CShape
{
	private:
		int length;
	public:
		void draw(int x, int y, HDC device_context);
		CLine(int I_length, int I_color);
};

