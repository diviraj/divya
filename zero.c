#include <stdio.h>
int main()
{
    int a[100],i,num,j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(i=0;i<num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if((a[i]+a[j])==0)
            {
          printf("%d %d",a[i],a[j]);
          break;
          }
      }  
    }
    return 0;
}
