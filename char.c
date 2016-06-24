#include <stdio.h>
#include <string.h>
int main(void) {
	char s[500];
	int k;
	scanf("%[^\n]s",s);
	k=strlen(s);
	printf("%d",k);
	return 0;
}
