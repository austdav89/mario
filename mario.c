#include <stdio.h>
#include <stdlib.h>
#include "./libs/stringlib.h"


int main(void){
    char *s = malloc(sizeof(char) * 3);
    int n;
    int flag;   
     do{
        flag = 1;
        printf("Height: ");
        fgets(s, 3, stdin);
        s[slen(s)-1] = '\0';
        if(isnum(s)){
            n = strtoint(s);
            if(n > 0 && n < 10)
                flag = 0;
        }
    }while(flag);
    
    for(int i = 1; i <= n; i++){
        for(int j = n - i; j > 0; j--){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("#");
        }
        printf("  ");
        for(int k = 0; k < i; k++){
            printf("#");
        }

        printf("\n");
    }    
    return 0;
}
