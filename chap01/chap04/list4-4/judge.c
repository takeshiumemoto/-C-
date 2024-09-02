void judge(const char s[],const int no[],int *hit,int *blow){
    *hit = *blow =0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(s[i]=='0'+no[j]){
                if(i==j)
                    (*hit)++;
                    else
                    (*blow)++;
            }
        }
    }
}