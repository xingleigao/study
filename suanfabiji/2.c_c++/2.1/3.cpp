#include<cstdio>
#include<cmath>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double r1,r2,d;
    d=b*b-4*a*c;
    d=sqrt(d);
    r1=(-b+d)/(2*a);
    r2=(-b-d)/(2*a);
    printf("r1=%7.2f\nr2=%7.2f\n",r1,r2);
    return 0;
}