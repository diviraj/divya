#include <stdio.h>
int main() 
  {
    int a[10],i,great,lower;
    for(i=0;i<10;i++)
    	scanf("%d",&a[i]);
    great=a[0];lower=a[0];
    for(i=0;i<10;i++)
		if(a[i]>great)
			great=a[i];
    printf("Great:%d\n",great);
    for(i=0;i<10;i++)
		if(a[i]<lower)
			lower=a[i];
    printf("Lower:%d",lower);
    return 0;
  }
