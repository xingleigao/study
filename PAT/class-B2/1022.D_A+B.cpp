#include<cstdio>
int main(){
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    a+=b;
    int ans[31],num=0;
    do{
            ans[num++]=a%d;
            a/=d;
    }while(a!=0);
    for(int i=num-1;i>=0;i++){
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}