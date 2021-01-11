#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("please write a size for the house : ");
	int size;
	scanf("%d", &size);
	int fl, by,bst=(size-1)/2,cty=1;
	fl = size;
	for (fl; fl > 1; fl--,cty += 2,bst--) {
		for (int bs = bst; bs > 0; bs--)
			printf(" ");
		if (fl > (size + 1) / 2)
			for (int ct = cty; ct > 0; ct--)
				printf("*");
		else
			for (int zm=size;zm>0;zm--)
				printf("*");
		printf("\n");
	}
}