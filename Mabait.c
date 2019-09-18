#include <stdio.h>
#include <stdlib.h>
int capacity, n, lick_total, hours = 1, amount;
main(){
	printf("Hours\t\tAmount\n\n");
	for (capacity = 2542; amount <= capacity; hours++){
		amount += 162;
		if (hours % 3 == 0){
			amount -= 12;
			n++;	
		}
		printf("%d\t\t%d\n\n", hours, amount);
		lick_total += 12;
		if (amount > 2542){
			break;	
		}	
	}
	printf("Hours it took to fill the bucket: %d\n\n", hours);
	if (amount > 2542){
		printf("It overflowed XD\n\n");	
	}
	printf("Mabait licked %d drops from the bucket\n\n", lick_total);
	printf("Mabait licked %d times from the bucket\n", n);
	return 0;	
}
