#include <stdio.h>
int main(void) 
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=a;a=b;b=t;
	printf("%d %d",a,b);
	return 0;
}
