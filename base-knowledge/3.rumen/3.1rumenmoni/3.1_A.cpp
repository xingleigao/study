#include<cstdio>
int main(){
    int L,M,S[10000],a,b,sum;
    while(true){
        scanf("%d %d",&L,&M);
        if(L==0&&M==0) break;
        for(int i=0;i<=L;i++) S[i]=1;
        while(M--){
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;++i) S[i]=0;
        }
        sum=0;
        for(int i=0;i<=L;i++) if(S[i]==1) sum++;
        printf("%d\n",sum);
    }
    return 0;
}