#include <stdio.h>
int main(void) {
	int k,l,m;
	scanf("%d%d%d",&k,&l,&m);
	if((k>l)&&(k>m))
		printf("k is greater");
	else if((l>k)&&(l>m))
		printf("l is greater");
	else
		printf("m is greater");
	return 0;
}
