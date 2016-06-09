#include <stdio.h>
int main()
{
    int n, r = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n%10;
        rr = r*10+rem;
        n /= 10;
    }
    printf("Reversed Number = %d",r);
    return 0;
}
