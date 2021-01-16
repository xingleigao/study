#include <cstdio>
int main (){
    int z[100]={0},i,a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    a=a+b;
    for(i=0;a>0;++i,a/=d)   z[i] = a%d;
    for(int j=i-1;j>=0;--j) printf("%d",z[j]);
    return 0;
}