#include <stdio.h>
int main()
{
    int i,sum=0,sum1=0;
    for(i=1;i<15;i++)
    	sum+=i;
     for(i=15;i<45;i++)
     	if(i%2!=0)
     		sum1+=i;
     printf("%d %d",sum,sum1);
    return 0;
}
