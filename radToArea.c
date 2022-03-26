// Radius to area calculator in C
// 05/08/2021

#include<stdio.h>
#include<math.h>

int main() {
	float radius = 0.0f;
	float area = 0.0f;

	printf("Enter the radius (float): ");
	scanf("%f", &radius);

	area = M_PI * (radius * radius);

	printf("%.6f", area);
	
	return 0;
}