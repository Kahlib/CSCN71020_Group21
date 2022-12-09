#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "IfRectangle.h"
#include "main.h"
#include "triangleSolver.h"
#include "angleFinder.h"

int side = 0;
float angleA;
float angleB;
float angleC;
char result;
bool wrongVal = false;

//work
int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();
		bool realVal = true;

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 2:
			printf_s("Four Points selected.\n");
		
			int fourPoint[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	
			getFourPoint(fourPoint);
		


	
			IfRectangle(fourPoint[0], fourPoint[1], fourPoint[2], fourPoint[3], fourPoint[4], fourPoint[5], fourPoint[6], fourPoint[7]);
			
			
			break;

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
	printf_s("2. Rectangle\n");
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

int getFourPoint(int* fourPoint) {
	printf_s("Enter the four points you wish to test in order (seperate all values with enter key): ");
	for (int i = 0; i < 8; i++)
	{
		
		if (scanf("%f", &fourPoint) != 1) {
			printf("\nInvalid Input");
			exit(1);
		}


		
	}
	return fourPoint;
}

