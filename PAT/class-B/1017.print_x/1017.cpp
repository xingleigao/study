#include <cstdio>
using namespace std;
int main(){
    int s,n,i;
    char c;
    scanf("%d %c",&s,&c);
    for(i=1;2*i*i<=s+1;i++);
    --i;
    s-=(2*i*i-1);
    i=2*i-1;
    n=i;
    if(n>1){
    while(i>0){
        for(int m=0;m<(n-i)/2;++m) printf(" ");
        for(int m=0;m<i;++m) printf("%c",c);
        printf("\n");
        i-=2;
    }
    i=3;
    while(i<n){
        for(int m=0;m<(n-i)/2;++m) printf(" ");
        for(int m=0;m<i;++m) printf("%c",c);
        printf("\n");
        i+=2;
    }
        for(int m=0;m<i;++m) printf("%c",c);
    }
    else printf("%c",c);
        printf("\n%d",s);
    return 0;
}
