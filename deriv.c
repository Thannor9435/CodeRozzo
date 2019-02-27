#include <stdlib.h>
#include <stdio.h>

// --------- programma calcolo derivata singola---------

int main() {
	int a;
	int b;
	char c;
	printf("n = coefnum, e = esponent \n");
	printf("usage nxe \n");
	printf("derivata di: ");
	scanf("%d%c%d", &a, &c, &b)
	a*=b;
	b-=1;
	printf(" %dx**%d \n", a, b);
}