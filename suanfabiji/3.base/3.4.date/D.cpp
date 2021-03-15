#include<cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int isLeap(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
};
int main(){
    int y,m,d,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&y,&m,&d);
        int le=isLeap(y);
        d++;
        int ans=1;
        if(d>month[m][le]){
            d-=month[m][le];
            m++;
        }
        if(m>12){
            y++;
            m-=12;
        }
        printf("%04d-%02d-%02d\n",y,m,d);
    }
    return 0;
}