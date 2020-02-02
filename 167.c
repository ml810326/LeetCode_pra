int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int* ret = (int*)malloc(sizeof(int)*2);
    int i=0;
    int *p, *q;
    
    p = &numbers[0];
    q = &numbers[numbersSize-1];
    
    while(p!=q){
        if((*p+*q)==target){
            ret[0] = (p-&numbers[0])+1;
            ret[1] = (q-&numbers[0])+1;
            *returnSize = 2;
            return ret;
        }
        else if((*p+*q)>target){
            q = q - 1;
        }
        else if((*p+*q)<target){
            p = p + 1;
        }
    }
    *returnSize = 0;
    return NULL;
}
