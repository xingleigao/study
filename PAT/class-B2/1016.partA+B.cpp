#include<cstdio>
int main(){
    long long A,Da,B,Db,numa=0,numb=0;
    scanf("%lld %lld %lld %lld",&A,&Da,&B,&Db);
    while(A>0){
        if(A%10==Da)  numa=numa*10+Da;
        A/=10;
    }
    while(B>0){
        if(B%10==Db)  numb=numb*10+Db;
        B/=10;
        //printf("\n");
    }
    printf("%lld\n",numb+numa);
    return 0;
}