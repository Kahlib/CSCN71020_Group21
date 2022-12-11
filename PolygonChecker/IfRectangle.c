#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "IfRectangle.h"
#include <stdbool.h>

float IfRectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	float sideOneLength;
	float sideTwoLength;
	float sideThreeLength;
	float sideFourLength;
	bool result = true;

	sideOneLength = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	sideTwoLength = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
	sideThreeLength = ((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3));
	sideFourLength = ((x1 - x4) * (x1 - x4)) + ((y1 - y4) * (y1 - y4));
	printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) = %.4f\n\n", x1, y1, x2, y2, sqrt(sideOneLength));
	printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) = %.4f\n\n", x2, y2, x3, y3, sqrt(sideTwoLength));
	printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) = %.4f\n\n", x3, y3, x4, y4, sqrt(sideThreeLength));
	printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) = %.4f\n\n", x4, y4, x1, y1, sqrt(sideFourLength));
	printf("\n");

	if (sideOneLength == sideThreeLength && sideTwoLength == sideFourLength)
	{
		printf("is a rectangle\n");
		float area;
		area = sqrt(sideOneLength) * sqrt(sideTwoLength);
		printf("The area of the rectangle is %.2f\n", area);
	}
	else {
		printf("is not a rectangle\n");
		result = false;
	}


	float perimeter;
	perimeter = sqrt(sideOneLength) + sqrt(sideTwoLength) + sqrt(sideThreeLength) + sqrt(sideFourLength);
	printf("The perimeter of the rectangle is %.2f\n", perimeter);


	return result;
}