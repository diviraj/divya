#include<stdio.h>
int ArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j;
    for (i = 0; i < n; i++)
    {
        curr_sum = arr[i];
        for (j = i+1; j <= n; j++)
        {
            if (curr_sum == sum)
            {
                printf ("Sum found between indexes %d and %d", i, j-1);
                return 1;
            }
            if (curr_sum > sum || j == n)
                break;
           curr_sum = curr_sum + arr[j];
        }
    }
 
    printf("No subarray found");
    return 0;
}
int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    ArraySum(arr, n, sum);
    return 0;
}
