typedef struct {
    int data[20000];
    int min[20000];
    int top;
    int mintop;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack* obj=(MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    obj->mintop = -1;
    memset(obj->data, 0, 20000);
    memset(obj->min, 0, 20000);
    return obj;
}

void minStackPush(MinStack* obj, int x) {
    if(obj->top<19999){
        obj->top++;
        obj->data[obj->top] = x;
        if(obj->mintop==-1 || x<=obj->min[obj->mintop]){
            obj->mintop++;
            obj->min[obj->mintop] = x;
        }
    }else{
        return;
    }
}

void minStackPop(MinStack* obj) {
    int temp;
    if(obj->top==-1)
        return;
    temp = obj->data[obj->top];
    obj->top--;
    if(temp==obj->min[obj->mintop])
        obj->mintop--;
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top];
}

int minStackGetMin(MinStack* obj) {
    if(obj->mintop<0)
        return;
    return obj->min[obj->mintop];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
