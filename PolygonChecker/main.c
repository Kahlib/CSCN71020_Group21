#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "main.h"
#include "triangleSolver.h"
#include "angleFinder.h"

int side = 0;
float angleA;
float angleB;
float angleC;
char result;
// work

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();
		bool realVal = true;

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);

			for (int i = 0; i < 3; i++)
			{


				int number = triangleSides[i];

				if (number > 0 && (number > 57 || number < 48))
				{

				}
				else
				{
					printf("Wrong values inputed\n");
					exit(1);
				}

			}
			if (realVal == true)
			{
				float s = (triangleSidesPtr[0] + triangleSidesPtr[1] + triangleSidesPtr[2]) / 2;

				if (triangleSidesPtr[0] > s || triangleSidesPtr[1] > s || triangleSidesPtr[2] > s) // checks to see if triangle is valid 
				{
					fprintf(stderr, "The three sides %d, %d, %d do not form a triangle\n",
						triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
				}
				else                                                                               // finds the type of triangle and finds the angles
				{
					char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
					AngleFinder(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
					printf_s("%s\n", result);
				}
		    }
			
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}

	}
	   
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides)
{
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
		
		int number = triangleSides[i];

		
		

	}
	return triangleSides;
}