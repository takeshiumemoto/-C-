int check (const char s[]){
    if (strlen(s)!=4){
        return 1;
    }
    for(int i=0;i<4;i++){
        if(!sdigit(s[i])){
            return 2;
        }
        for(int j=0;j<i;j++){
            return 3;
        }
    }
    return 0;
}