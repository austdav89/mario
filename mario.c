#include <stdio.h>
#include "./libs/stringlib.c"

#define MAX_CHARS 25

int main(void){
    char s[MAX_CHARS];
    int n;
   
     do{
        printf("Please enter height: ");
        fgets(s,MAX_CHARS,stdin);
        s[slen(s)-1] = '\0';
    }while(!isnum(s));
    
    n = strtoint(s);
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > 0; j--){
            printf(" ");
        }
        for(int k = 1; k < n; k++){
            printf("#");
        }
        printf("\n");
    }    
    return 0;
}
