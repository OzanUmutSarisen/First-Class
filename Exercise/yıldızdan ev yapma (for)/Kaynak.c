#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("Enter size of the house: ");
	scanf("%d", &size);
	int bsl, ast = 1, line = 1;
	for (int i=0;i<(size+1)/2;i++,line+=2){
	for (bsl = size / 2; bsl > line/2; bsl--) {
		printf(" ");
	}
	for (ast = 1; ast <= line; ast++) {
		printf("*");
	}
	printf("\n");	
	}
	for (int bn = (size -1) / 2; bn > 0;bn-- ) {
		for(int sn=size;sn>0;sn--){
			printf("*");
		}
		printf("\n");
	}
}