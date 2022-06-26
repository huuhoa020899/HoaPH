#pragma once
#include<iostream>
#include<Windows.h>
#include<cstdlib>
class CShape {
public:
	int color;
	virtual void draw(int x, int y, HDC device_context)=0;
};
