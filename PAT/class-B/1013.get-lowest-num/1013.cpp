#include <cstdio>
int main(){
    int s[10],add=0;        //一定要注意初始值的定义
    for(int i=0;i<10;add+=s[i],++i) scanf("%d",&s[i]);
    int d[add],j=1;
    while(s[j]<1) ++j;      //找到第一个非零数字
    s[j]--;
    d[0]=j;
    int n=1;
    while(s[0]>0)  {        //处理零
        --s[0];d[n++]=0;
        }
    for(;n<add;++j){
        while(s[j]>0){
            d[n++]=j;
            s[j]--;
        }
    }
    for(int i=0;i<add;++i) printf("%d",d[i]);
    return 0;
}