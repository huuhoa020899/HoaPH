#include "CCircle.h"
void CCircle::draw(int x, int y, HDC device_context)
{
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(color, 0, 0));
	SelectObject(device_context, pen);
	Ellipse(device_context, x, y, x + 2 * radium, y + 2 * radium);

}
CCircle::CCircle(int I_color, int I_radium)
{
	color = I_color;
	radium = I_radium;
}
