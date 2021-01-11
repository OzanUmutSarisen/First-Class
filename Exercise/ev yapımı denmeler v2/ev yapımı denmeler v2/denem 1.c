#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("please write a size for the house : ");
	int size;
	scanf("%d", &size);
	int fl, by, bst = (size - 1) / 2, cty = 1;
	fl = size;
	if (size > 5){
	for (fl; fl > 0; fl--, cty += 2, bst--) {
		for (int bs = bst; bs > 0; bs--)
			printf(" ");
		if (fl > (size + 1) / 2)
			for (int ct = cty; ct > 0; ct--)
				printf("*");
		else{
			if (fl > size / 3)
				for (int zm = size; zm > 0; zm--)
					printf("*");
			else{
				if (size%3==1 || size%3==0){
				for (int kpk = size/3; kpk > 0; kpk--)
					printf("*");
				for (int kp = size - 2*(size / 3); kp > 0; kp--)
					printf(" ");
				for (int kpk = size / 3; kpk > 0; kpk--)
					printf("*");
					}
				else {
					for (int kpk = (size / 3)+1; kpk > 0; kpk--)
						printf("*");
					for (int kp = size - 2*((size / 3)+1); kp > 0; kp--)
						printf(" ");
					for (int kpk = (size / 3) + 1; kpk > 0; kpk--)
						printf("*");
					}
				}
			}
		printf("\n");	
		}
		
	}
	else {
		for (fl; fl > 0; fl--, cty += 2, bst--) {
			for (int bs = bst; bs > 0; bs--)
				printf(" ");
			if (fl >= (size + 1) / 2)
				for (int ct = cty; ct > 0; ct--)
					printf("*");
			else{
				if (fl>(size-1)/2)
					for (int zm = size; zm > 0; zm--)
						printf("*");
				else {
					for (int kpk = (size + 1) / 3; kpk > 0; kpk--)
						printf("*");
					for (int kp = 1; kp > 0; kp--)
						printf(" ");
					for(int kpk = (size + 1) / 3;kpk>0;kpk--)
						printf("*");
				}	
		}
		printf("\n");
		}
	}	
}