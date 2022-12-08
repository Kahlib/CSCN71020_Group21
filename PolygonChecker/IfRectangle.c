#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "IfRectangle.h"


float IfRectangle(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
	float sideOneLength;
	float sideTwoLength;
	float sideThreeLength;
	float sideFourLength;
	float gdistance;

	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
	printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}