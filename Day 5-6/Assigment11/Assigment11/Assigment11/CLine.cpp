#include "CLine.h"
CLine::CLine(int I_length, int I_color)
{
length = I_length;
color = I_color;
}
void CLine::draw(int x, int y, HDC device_context)
{
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(color, 0, 0));
	SelectObject(device_context, pen);
	//MoveToEx(device_context, x, y,(LPPOINT)NULL);
	LineTo(device_context, x+ length,y);
}