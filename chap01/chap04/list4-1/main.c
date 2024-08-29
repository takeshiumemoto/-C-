void make4digits(int x[]){
    for(int i=0; i<4;i++){
        int j,val;
        do{
            val = rand()%10;
            for(j=0;j<i;j++){
                if(val==x[j]){
                    break;
                }
            }
        }while(j<i);
        x[i]=val;
    }
}