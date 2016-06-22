#include <stdio.h>
#include<string.h>
 int main()
{
    char array[1000];
    int i,b[26]={0},n;
	scanf("%s",array);
	n=strlen(array);
	for(i=0;i<n;i++)
    	b[array[i]%97]++;
    for(i=0;i<n;i++)
    {
    	if(b[array[i]%97]==1)
    	{
    		printf("%c",array[i]);
    		break;
    	}
    }
	return 0;
}
