#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

void printNameCourse();
float computeCircleArea(float RO);

int main (){
	printNameCourse();
	
	
	float area;
	float radius;
	
	radius = 10;
	
	area = computeCircleArea(radius);
	
	printf("\n\t The area is %f\n", area);
	
	return EXIT_SUCCESS;
}

void printNameCourse(){
	puts("\n RENZO OLAIS");
	puts("\n Hello World");
	puts("\n 3rd compile!");
}

float computeCircleArea(float RO){
	return PI * RO * RO;
}

