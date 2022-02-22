#define _CRT_SECURE_NO_WARNINGS
#include "segments.h"
#include <iostream>

void segments::vvod()
{
	printf("\nВведите количество отрезков от 1 до %d: ", MAXN);
	while ((scanf("%d", &n) < 1)||(n<1)||(n>MAXN)) {
		while (getchar() != '\n');
		printf("Количество отрезков введено неверно.\n");
	}
	ptrline = new line[n];
	for (int i = 0; i < n; i++) {
		printf("Введите координаты точек начала и конца отрезка %d: ",i);
		ptrline[i].vvod();
	}
	return;
}

void segments::totalvivod()
{
	for (int i = 0; i < n; i++) {
		printf("Отрезок %d:\n",i);
		ptrline[i].vivod();
	}
	return;
}

void segments::vivod(int i)
{
	if ((i >= 0) && (i < n)) {
		printf("Отрезок %d:\n",i);
		ptrline[i].vivod();
		return;
	}
	printf("\nНомер отрезка введён неверно.");
	return;
}

float segments::totallength()
{
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ptrline[i].length();
	}
	return sum;
}

float segments::length(int i)
{
	if ((i >= 0) && (i < n))
		return ptrline[i].length();
	return -1;
}
