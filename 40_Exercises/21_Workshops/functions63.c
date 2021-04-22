#include <stdio.h>



void ComputeCircleArea(float radius, float* area);


int main()
{
	float myRadius = 4.545;
	float area = 0.0f;
	
	ComputeCircleArea(myRadius, &area);
	printf("Given Radius %.3f, the area equals½3f\n", myRadius, area);
	
	return 0;
}


float ComputeCircleArea (float radius) {
	float pi = 3.1415927;
	float area = radius*radius*pi;
	return area;
}
