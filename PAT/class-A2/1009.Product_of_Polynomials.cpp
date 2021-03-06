#include<cstdio>
struct Poly{
    int exp;//指数
    double cof;//系数
}Poly[1001];
double ans[2001]={0.0};
int main(){
    int n,m,number=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d %lf",&Poly[i].exp,&Poly[i].cof);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int exp;
        double cof;
        scanf("%d %lf",&exp,&cof);
        for(int j=0;j<n;j++) {
            if(ans[exp+Poly[j].exp]==0.0) number++;
            ans[exp+Poly[j].exp]+=(cof*Poly[j].cof);
            if(ans[exp+Poly[j].exp]==0.0) number--;
        }
    }
    printf("%d",number);
    for(int i=2000;i>=0;--i){
        if(ans[i]!=0.0) printf(" %d %.1f",i,ans[i]);
    }
    printf("\n");
}