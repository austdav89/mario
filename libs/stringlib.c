int slen(char *s){
    int c = 0;

    while(*s++ != '\0'){
        c++;
    }
    return c;
}


int isnum(char *s){
    while(*s != '\0'){
        if (*s > '9' || *s < '0'){
            printf("%c\n",*s);
            return 0;
        } 
        s++;   
    }
    return 1;
}


int strtoint(char *s){
    int n = 0;
    if(isnum(s)){
        while(*s != '\0'){
            n += (*s - '0');
            n *= 10;
            s++;
        }
        return n / 10;
    }
    return 0;
}

