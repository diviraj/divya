#include <stdio.h>
int main()
{
    int  i,j,a,b,flag = 0,c=0;
    scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	flag=0;
    for(j=2; j<=i/2; ++j)
        if(i%j==0)
        {
            flag=1;
            break;
        }
	
    if (flag==0)
    	c++;
   	}
	 printf("%d\t",c);
    
    return 0;
}
