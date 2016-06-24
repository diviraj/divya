#include <stdio.h>
int main() 
  {
    int a[10],i,great;
    for(i=0;i<10;i++)
    	scanf("%d",&a[i]);
    great=a[0];
    for(i=0;i<10;i++)
		if(a[i]>great)
			great=a[i];
    printf("%d",great);
    return 0;
  }
