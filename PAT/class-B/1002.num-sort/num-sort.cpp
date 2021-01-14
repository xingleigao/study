#include<cstdio>
#include<math.h>
#pragma warning(disable:4996)
int main(){
    int n,num,a1=0,a2=0,a3=0,a4=0,a5=0,countA4=0;
    bool existA1=false,existA2=false;
        scanf("%d",&n);
        for(int i=0,j=0;i<n;++i){
        scanf("%d",&num);
        switch(num%5){
        case 0:
        if(num%2==0) {existA1=true;a1+=num;} break;
        case 1:
        existA2=true;a2+=num*pow((double)(-1),j++); break;
        case 2:
        a3++; break;
        case 3:
        a4+=num;countA4++;break;
        case 4:a5=(a5>num?a5:num);break;
        default:break;
    }
    }
    if(existA1) printf("%d ",a1);else printf("N ");
    if(existA2) printf("%d ",a2);else printf("N ");
    if(a3)printf("%d ",a3);else printf("N ");
    if(countA4)printf("%.1f ",(double)a4/countA4);else printf("N ");
    if(a5)printf("%d",a5);else printf("N");
    return 0;
}