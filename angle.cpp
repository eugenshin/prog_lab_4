#define _CRT_SECURE_NO_WARNINGS
#include "angle.h"
#include <iostream>
#include <math.h>

void angle::vvod()
{
	ftpoint.vvod();
	verpoint.vvod();
	sdpoint.vvod();
	return;
}

void angle::vivod()
{
	printf("Первая точка угла: %.3f %.3f\nВершина угла: %.3f %.3f\nВторая точка угла: %.3f %.3f", ftpoint.getx(), ftpoint.gety(), verpoint.getx(), verpoint.gety(), sdpoint.getx(), sdpoint.gety());
	return;
}

float angle::value()
{
	return acos(((ftpoint.getx() - verpoint.getx()) * (sdpoint.getx() - verpoint.getx()) + (ftpoint.gety() - verpoint.gety()) * (sdpoint.gety() - verpoint.gety())) / ftpoint.distance(&verpoint) / sdpoint.distance(&verpoint)) / 3.14159265 * 180;
}