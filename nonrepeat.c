#include <stdio.h>
#include<string.h>
void duplicate(char a[], int n)
{
	int i,b[26]={0};
    for(i=0;i<n;i++)
    	b[a[i]%97]++;
    for(i=0;i<n;i++)
    {
    	if(b[a[i]%97]==1)
    	{
    		printf("%c",a[i]);
    		break;
    	}
    }
}
 
 int main()
{
    char a[1000];
    int n;
	scanf("%s",a);
	n=strlen(a);
	duplicate(a,n);
	return 0;
}
