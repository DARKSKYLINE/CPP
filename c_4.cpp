#include <stdio.h>

int wide,high ;
float square;

main(){
	printf("Enter wide;");
	scanf("%d", &wide);
	printf("Enter high;");
	scanf("%d", &high);
	square = wide*high;
	printf("\nsquare = %.3f",square);
}

