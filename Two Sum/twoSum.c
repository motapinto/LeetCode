/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int *nums, int numsSize, int target, int *returnSize){
    for(int i=0; i<numsSize; i++) {
        for(int j=i+1; j<numsSize; j++) {
            if(nums[i]+nums[j] == target) {
                int* returnVec = (int*)malloc(2*sizeof(int));
                returnVec[0] = i;
                returnVec[1] = j;
                *returnSize = 2;
                return returnVec;
            }
        }
    }
    return NULL;
}


