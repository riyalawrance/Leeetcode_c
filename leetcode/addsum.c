/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *i,*j;
    for(i=nums;i<i+numsSize;i++)
    {
        for(j=i+1;j<j+numsSize;j++)
        {
            if(*i+*j==target)
            {
                return i;

            }
            else
            continue;
        }
    }
}
int main()
{
    int nums[10],numSize,target,returns=2,*result;
    nums[10]= 5,7,8,4,5,2;
    target=7;
    result=twoSum(&nums[10],6,7,&returns);
    printf("%d",*result);
}