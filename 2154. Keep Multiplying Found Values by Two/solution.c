int findFinalValue(int* nums, int numsSize, int original){
    int prev = original;
    for(int i = 0; i < numsSize; i++){
        if(original == nums[i]){
            original *= 2;
            break;
        }
    }
    if(original == prev)return original;
    return findFinalValue(nums, numsSize, original);
}