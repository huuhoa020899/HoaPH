#include "CRactangle.h"
#include "Cshape.h"
void CRactangle::draw(int x, int y, HDC device_context)
{
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(color, 0, 0));
	SelectObject(device_context, pen);
	Rectangle(device_context, x, y, x + width, y + height);
}
CRactangle::CRactangle(int I_color, int I_width, int I_height)
{
	color = I_color;
	width = I_width;
	height = I_height;
}