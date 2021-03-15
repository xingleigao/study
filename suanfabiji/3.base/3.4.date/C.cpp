#include<cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int isLeap(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
};
int main(){
    int y,m,d;
    while(scanf("%d %d",&y,&d)!=EOF){
        int le=isLeap(y);
        //printf("%d",le);
        int ans=1;
        m=1;
        while(d>month[m][le]){
            d-=month[m][le];
            m++;
        }
        printf("%04d-%02d-%02d\n",y,m,d);
    }
    return 0;
}