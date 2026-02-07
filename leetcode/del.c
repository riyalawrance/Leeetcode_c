#include<stdio.h>
int main()
{
    int i,j,res=-1;
    int numsSize=8,val=2;
    int nums[]={0,1,2,2,3,0,4,2};
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
            res+=1;
            for(j=i;j<numsSize-1;j++)
                nums[j]=nums[j+1];
            if(i!=0)
            i--;
        }
        
    }
    for(i=0;i<numsSize;i++)
    printf("%d",nums[i]);
    printf("%d",res);
    return(numsSize-res);
}