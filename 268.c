int missingNumber(int* nums, int numsSize) {
    int a=0;
    for(int i=0;i<numsSize;i++){
        a=a+nums[i];
    }
    int b=(numsSize*numsSize+numsSize)/2;
    return b-a;
}