#include <stdio.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *res;
    res = (int *)malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        *res = 1;
        for(int j=0;j<numsSize;j++)
        {
            if(j!=i)
            *res*=nums[i];
        }
        res++;
    }
    return res;
}

void main()
{

}