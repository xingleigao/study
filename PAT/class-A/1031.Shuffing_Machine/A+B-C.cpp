#include <stdio.h>
#pragma warning(disable:4996)
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
         printf("Case #%d:%s\n",i,a+b>c?"true":"false");
    }
    return 0;
}