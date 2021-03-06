#include<cstdio>
const int max_n=1111;
double p[max_n]={0};
int main(){
    int k,n,count=0;
    double a;
    scanf("%d",&k);
    count+=k;
    for(int i=0;i<k;i++){
        scanf("%d %lf",&n,&a);
        p[n]+=a;
    }
    scanf("%d",&k);
    count+=k;
    for(int i=0;i<k;i++){
        scanf("%d %lf",&n,&a);
        if(p[n]!=0) count--;
        p[n]+=a;
        if(p[n]==0) count--;
    }
    printf("%d",count);
    for(int i=max_n;i>=0;i--)
        if(p[i]!=0)
            printf(" %d %.1f",i,p[i]);
    printf("\n");
    return 0;
}