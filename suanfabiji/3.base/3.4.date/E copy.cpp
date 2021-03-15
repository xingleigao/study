#include <cstdio>
int isleap(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
};

int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
    int y,m,d,n,sum;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d %d %d",&y,&m,&d,&sum);
        while(sum--){
            d++;
            if(d>month[m][isleap(y)] ){
                m++;
                d = 1;
            }
            if(m> 12){
                y++;
                m = 1;
            }
        }
        printf("%04d-%02d-%02d\n",y,m,d);
    }
    return 0;
}
