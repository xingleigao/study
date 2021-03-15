#include <cstdio>
#include <cmath>
int main(){
    int a,b,num;
    for(int i=1000;i<2000;i++){
    num=0;
    b=i;
    for(int j=0;j<4;j++){
        a=b%10;
        num+=a;
        num*=10;    
        b=b/10;
    }
    num/=10;
    num/=9;
    if(num==i) 
    printf("%d\n",i);
    }
    return 0;
}