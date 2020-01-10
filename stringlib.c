
int isNum(char *s){
    int len = slen(s);
    
    while(*s++ != '\0'){
        if (*s > '9' || *s < '0'){
            return 0;
        }    
    
    }
    return 1;
}

int slen(char *s){
    int c = 0;

    while(*s++ != '\0'){
        c++;
    }
    return c;
}


int strtoint(char *s){
    return 0;
}

