#include <stdio.h>
#include<string.h>
 int main()
{
    char array[1000];
    int i,n,c=0;
	scanf("%s",array);
	n=strlen(array);
	for(i=0;i<n;i++)
	{
    	if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u'||array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U')
    		c++;
    }
    printf("%d",c);
	return 0;
}
