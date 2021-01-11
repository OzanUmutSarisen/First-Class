#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("How many money do you have? ");
	int money;
	scanf("%d", &money);
	int res100;
	res100 = money / 100;
	int k50 = money % 100;
	int res50 = k50 / 50;
	int k10 = k50 % 50;
	int res10 = k10 / 10;
	int k5 = k10 % 10;
	int res5 = k5 / 5;
	int k1 = k5 % 5;
	printf(" %d  tane 100 var\n",res100);
	printf(" %d  tane 50 var\n", res50);
	printf(" %d  tane 10 var\n", res10);
	printf(" %d  tane 5 var\n", res5);
	printf(" %d  tane 1 var\n", k1);

}