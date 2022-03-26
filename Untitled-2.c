// Radius to area calculator in C

#include<stdio.h>
#include<math.h>

int main(){
	float radius = 0.0f;
	float area = 0.0f;

	printf("Enter the radius (float): ");
	scanf("%f", &radius);

	area = M_PI * (radius * radius);

	printf(area);
	
	return 0;
}

