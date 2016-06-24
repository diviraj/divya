#include <stdio.h>
int main()
{
    int n1, n2,Multiple;
    scanf("%d %d", &n1, &n2);
    Multiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( Multiple%n1==0 && Multiple%n2==0 )
        {
            printf("%d",Multiple);
            break;
        }
        ++Multiple;
    }
    return 0;
}
