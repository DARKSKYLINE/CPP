#include <stdio.h>

int base, high;
float triangle;

main(){
	printf("Enter base;");
	scanf("%d", &base);
	printf("Enter high;");
	scanf("%d", &high);
	triangle = 0.5*base*high;
	printf("\nstriangle = %.3f",triangle);
}

