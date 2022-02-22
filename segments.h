#pragma once
#include "line.h"
#define MAXN 100

class segments
{
	int n;
	line* ptrline;
public:
	void vvod();
	void totalvivod();
	void vivod(int i);
	float totallength();
	float length(int i);
};