#include<cstdio>
int main(){
    int num,A1=0,A2=0,A3=0,A5=0,n,A2_i=2;
    float A4=0,A4_num=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        scanf("%d",&num);
        switch(num%5){
            case 0:if(num%2==0) A1+=num;break;
            case 1:A2_i%2==0?A2+=num:A2-=num;A2_i++;break;
            case 2:A3++;break;
            case 3:A4_num++;A4+=num;break;
            case 4:num>A5?A5=num:A5=A5;break;
        }
    }
    A4=A4/A4_num;
    A1>0?printf("%d ",A1):printf("N ");
    A2_i>2?printf("%d ",A2):printf("N ");
    A3>0?printf("%d ",A3):printf("N ");
    A4>0?printf("%.1f ",A4):printf("N ");
    A5>0?printf("%d\n",A5):printf("N\n");
    return 0;
}