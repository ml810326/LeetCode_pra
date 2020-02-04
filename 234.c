bool isPalindrome(struct ListNode* head){
    struct ListNode* p = head;
    int n = 1,k = 1;
    while(p!=NULL){
        n++;p=p->next;
    }
    
    int A[n];
    p = head;
    while(p!=NULL){
        
        A[k++] = p->val;
        p=p->next;
    }
    
    int i=1,j=n-1;
    while(i<j){
        if(A[i]!=A[j])
            return false;
        i++;j--;
    }
    
    return true;
}
