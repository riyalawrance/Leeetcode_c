#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n = 4, i, j, k = 0;
    int nums[4] = { 1,2,3,4 };
    int len = n * (n + 1) / 2;
    int sum[2];
    int temp, pt = 0, index = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++)
        {
            temp += nums[j];
            sum[k++] = temp;
            printf("%d\n", temp);
        }       temp = 0;
    }


}