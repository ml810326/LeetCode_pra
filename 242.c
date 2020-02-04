bool isAnagram(char * s, char * t){
    char hash[255]={0};
    
    if(s==NULL && t==NULL) 
	    return true;
    
    if(strlen(s) != strlen(t)) 
	    return false;
    
    while((*s != '\0') && (*t != '\0'))
    {
        hash[*s++] += 1;
        hash[*t++] -= 1;
    }
    
    for(int i= 0;i<255;i++)
    {
        if(hash[i] != 0)
            return false;
    }
    
    return true;
}
