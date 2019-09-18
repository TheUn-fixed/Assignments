#include <stdio.h>
#include <stdlib.h>
int n, factor;
main(){
	printf("Input a number: ");
		scanf("%d", &n);	
	for (factor = 1; factor <= n; ++factor){
		if (n % factor == 0){
			printf("%d\n", factor);	
		}	
	}
	return 0;
}
