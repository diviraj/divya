#include <stdio.h>
int main() 
  {
    int a[100],i,n,sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
     	sum+=a[i];
     }
     avg=sum/n;
     printf("%d",avg);
    return 0;
  }
