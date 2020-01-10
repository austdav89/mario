#include <stdio.h>
#include "/libs/stringlib.c"

#define MAX_CHARS 25

int main(void){
    char n[MAX_CHARS];
    fgets(n,MAX_CHARS,stdin);
    n[slen(n)-1] = 0;

    
    
    printf("%li",slen(n));
    return 0;
}
