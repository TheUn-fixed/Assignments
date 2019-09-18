#include <stdio.h>
#include <stdlib.h>
float s1, s2, s3;
main(){
	printf("Input dimensions:\n");
		printf("Side 1: ");
			scanf("%f", &s1);
		printf("Side 2: ");
			scanf("%f", &s2);
		printf("Side 3: ");
			scanf("%f", &s3);
	if (s1 == s2 && s1 == s3){
		printf("Equilateral");	
	}
	else if (s1 == s2 && s1 != s3 || s1 == s3 && s1 != s2 || s2 == s3 && s2 != s1){
		printf("Isosceles");	
	}
	else if (s1 != s2 && s1 != s3 && s2 != s3){
		printf("Scalene");	
	}
	return 0;
}
