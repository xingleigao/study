#include <cstdio>
using namespace std;
int main(){
    int c1,c2,ss,mm,hh;
    scanf("%d %d",&c1,&c2);
    c1=c2-c1;
    c1=((float)c1/100.0+0.5);
    ss=c1%60;
    c1/=60;
    mm=c1%60;
    c1/=60;
    hh=c1%60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}