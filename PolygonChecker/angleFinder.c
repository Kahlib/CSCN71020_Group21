#include <stdio.h>
#include <stdbool.h>
#include <math.h>


float AngleFinder(int side1, int side2, int side3)
{
	float angleA;
	float angleB;
	float angleC;
	float area, R;
	float a = side1;
	float b = side2;
	float c = side3;
	float s = (a + b + c) / 2;
	float pi = acos(-1);


	area = sqrt(s * (s - a) * (s - b) * (s - c));

	R = (a * b * c) / (4 * area);

	angleA = (180 / pi) * asin(a / (2 * R));
	angleB = (180 / pi) * asin(b / (2 * R));
	angleC = (180 / pi) * asin(c / (2 * R));

	printf("Angle of side 1 and side 2 is %.1f\n", angleA);
	printf("Angle of side 2 and side 3 is %.1f\n", angleB);
	printf("Angle of side 3 and side 1 is %.1f\n", angleC);

	return;



}