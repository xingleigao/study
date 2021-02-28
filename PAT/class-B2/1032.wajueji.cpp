#include<cstdio>
int main(){
    int N,score[100000],num,scoren,max;
    for(int i=0;i<=100000;++i) score[i]=0;
    scanf("%d",&N);
    while(N--){
        scanf("%d %d",&num,&scoren);
        score[num]+=scoren;
    }
    for(num=0;num<=100000;++num){
        if(score[num]!=0){
            scoren=score[num];
            max=num;
            break;
        }
    }
    for( ;num<=100000;++num){
        if(score[num]>=scoren){
            scoren=score[num];
            max=num;
        }
    }
    printf("%d %d\n",max,score[max]);
    return 0;
}