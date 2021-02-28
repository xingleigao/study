#include<cstdio>
const int CLK_TCK=100;
int main(){
    int c1,c2,ans;
    scanf("%d %d",&c1,&c2);
    ans=c2-c1;
    if(ans%CLK_TCK>=50) ans=ans/CLK_TCK+1;
    else ans=ans/CLK_TCK;
    printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
    return 0;
}