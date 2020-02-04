int majorityElement(int* nums, int numsSize){
    int i, num;
    int cout = 0;
    for(i=0;i<numsSize;i++){
        if(i==0){
            num = nums[i];
            cout++;
        }else{
            if(nums[i]==num)
                cout++;
            else{
                cout--;
                if(cout==0)
                    num = nums[i+1];
            }
        }
    }
    return num;
}
