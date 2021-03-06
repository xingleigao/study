#include<cstdio>
int main(){
    int n=1,a,e;
    while(scanf("%d %d",&a,&e)!=EOF){
        if(e!=0){
            if(n!=1){
                printf(" ");
            }
            printf("%d %d",a*e,e-1);
            n++;
        }
    }
    if(n==1) printf("0 0");
    printf("\n");
    return 0;
} 