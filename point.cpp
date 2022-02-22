#define _CRT_SECURE_NO_WARNINGS
#include "point.h"
#include <iostream>
#include <math.h>

void point::vvod()
{
	while (scanf("%f%f", &x, &y) < 2) {
		while (getchar() != '\n');
		printf("Координаты точки введены неверно.\n");
	}
	return;
}

void point::vivod()
{
	printf("x=%.3f, y=%.3f", x, y);
}

float point::distance(point* sdpoint)
{
	return sqrt(pow(sdpoint->x - x, 2) + pow(sdpoint->y - y, 2));
}

float point::getx()
{
	return x;
}

float point::gety()
{
	return y;
}
