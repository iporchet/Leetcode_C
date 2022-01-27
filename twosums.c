/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            int temp = target - nums[i];

            for (int x = 0; x < numsSize; x++)
            {
                if (temp == nums[x])
                {}
                    return i, x;
                }
            }
        }
    }  
}

int main(void)
{
    int nums[] = {2,7,11,15};
    int target = 9;
    int indexes[2];

    indexes[0,1] = twoSum(nums, sizeof(nums), target, sizeof(indexes));

    return 0;

}