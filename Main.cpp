#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"
#include "segments.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point* pointmas1 = new point[2];
	printf("������� ���������� ������ �����: ");
	pointmas1[0].vvod();
	printf("������� ���������� ������ �����: ");
	pointmas1[1].vvod();
	printf("���������� ������ �����: ");
	pointmas1[0].vivod();
	printf("\n���������� ������ �����: ");
	pointmas1[1].vivod();
	printf("\n���������� ����� ������� = %f", pointmas1[0].distance(&pointmas1[1]));
	delete[] pointmas1;
	point* pointmas2[2];
	for (int i = 0; i < 2; i++) {
		pointmas2[i] = new point;
	}
	printf("\n������� ���������� ������ �����: ");
	(*pointmas2[0]).vvod();
	printf("������� ���������� ������ �����: ");
	(*pointmas2[1]).vvod();
	printf("���������� ������ �����: ");
	(*pointmas2[0]).vivod();
	printf("\n���������� ������ �����: ");
	(*pointmas2[1]).vivod();
	printf("\n���������� ����� ������� = %f", (*pointmas2[0]).distance(pointmas2[1]));
	for (int i = 0; i < 2; i++) {
		delete pointmas2[i];
	}
	line line1;
	printf("\n������� ���������� ������ � ������ ����� �����: ");
	line1.vvod();
	line1.vivod();
	printf("\n������ ����� = %f", line1.length());
	angle angle1;
	printf("\n������� ���������� ������: �� ������ ������� ����, �������, �� ������ ������� ����: ");
	angle1.vvod();
	angle1.vivod();
	printf("\n�������� ���� = %f ��������.", angle1.value());
	triangle tri1;
	printf("\n������� ���������� ����� ������������: ");
	tri1.vvod();
	tri1.vivod();
	printf("\n������� ������������ = %f, �������� ������������ = %f", tri1.square(), tri1.per());
	circle circle1;
	printf("\n������� ���������� ����� ����� � ��� ������: ");
	circle1.vvod();
	circle1.vivod();
	printf("\n������� ����� = %f, �������� ����� = %f", circle1.square(), circle1.per());
	segments sm1;
	sm1.vvod();
	sm1.totalvivod();
	sm1.vivod(0);
	printf("����� 1 �������� = %f\n", sm1.length(0));
	sm1.vivod(1);
	printf("����� ������� �������� = %f\n", sm1.length(1));
	printf("����� ����� = %f", sm1.totallength());
	return 0;
}