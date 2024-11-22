int strStr(char* haystack, char* needle) {
    int len = strlen(haystack),len2=strlen(needle), j=0;
    for(int i=0; i<len; i++){
        if(haystack[i] != needle[j]){i=i-j;j=0;} else j++;
        if(j == len2) return i-len2+1;
    }
    return -1;
}
