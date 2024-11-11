bool isValid(char* s) {
    char *stack = (char *)malloc(strlen(s)* sizeof(char));
    int p=0;
    while(*s){
        if (*s == '(' || *s == '[' || *s == '{'){
            stack[p++] = *s;
        } else if (p == 0) {
            free(stack); return false;
        }
        if (*s == ')' && stack[--p] != '('){
            free(stack);return false;
        } else if (*s == ']' && stack[--p] != '['){
            free(stack);return false;
        } else if (*s == '}' && stack[--p] != '{'){
            free(stack);return false;
        }
        s++;
    }
    free(stack);
    if (p==0) return true;
    return false;
}
