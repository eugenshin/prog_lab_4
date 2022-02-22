#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <iostream>
#define PI 3.14159265

void circle::vvod()
{
	printf("Введите координаты центра окружности: ");
	center.vvod();
	printf("Введите длинну радиуса окружности: ");
	while (scanf("%f", &radius) < 1) {
		while (getchar() != '\n');
		printf("Радиус введен неверно.");
	}
}

void circle::vivod()
{
	printf("Центр окружности: %.3f %.3f\nРадиус окружности: %.3f", center.getx(), center.gety(), radius);
}

float circle::square()
{
	return radius*radius*PI;
}

float circle::per()
{
	return 2*PI*radius;
}