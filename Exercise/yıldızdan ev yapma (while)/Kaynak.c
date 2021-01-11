#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("How many floor whould you like ? : ");
	int floor;
	scanf("%d",&floor);
	int bs, yld,cty=1, counter = 1, ct = (floor - 1) / 2;
	while (counter<=floor){
		bs = ct;
		while (bs > 0){
			printf(" ");
			bs--;
		}
		ct--;
		if (counter <= (floor - 1) / 2) {
			yld = cty;
			while (yld > 0) {
				printf("*");
				yld--;
			}
		cty += 2;
		}
		else {
			int yldf = floor;
			while (yldf > 0) {
				printf("*");
				yldf--;
			}
		}
		printf("\n");
		counter++;
	}
}