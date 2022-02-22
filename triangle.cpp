#define _CRT_SECURE_NO_WARNINGS
#include "triangle.h"
#include <iostream>
#include "angle.h"
#include <math.h>

void triangle::vvod()
{
	ftpoint.vvod();
	sdpoint.vvod();
	tdpoint.vvod();
	return;
}

void triangle::vivod()
{
	printf("Первая точка треугольника: %.3f %.3f\nВторая точка треугольника: %.3f %.3f\nТретья точка треугольника: %.3f %.3f", ftpoint.getx(), ftpoint.gety(), sdpoint.getx(), sdpoint.gety(), tdpoint.getx(), tdpoint.gety());
}

float triangle::square()
{
	return abs((sdpoint.getx() - ftpoint.getx()) * (tdpoint.gety() - ftpoint.gety()) - (tdpoint.getx() - ftpoint.getx()) * (sdpoint.gety() - ftpoint.gety())) / 2;
}

float triangle::per()
{
	return ftpoint.distance(&sdpoint) + sdpoint.distance(&tdpoint) + tdpoint.distance(&ftpoint);
}