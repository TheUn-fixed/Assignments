#include <stdio.h>
int main(){	
	float seconds, distance;	
	printf("Enter time in seconds: ");
		scanf("%f", &seconds);
	if (seconds >= 0){
		distance = seconds * 2 / 3;	
		printf("Distance from starting point: %.2f cm", distance);	
	}
	else{
		printf("Input Error!");
	}
	return 0;	
}
