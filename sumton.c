// Sum of 1 to n
// 05/08/2021

#include<stdio.h>
#include<math.h>

int main(){
	double n;
	double result;

	printf("Enter a number to find the sum to: ");
	scanf("%lf", &n);

	result = n * (n+1) / 2;

	printf("The sum of is %lf", result);

	return 0;
}