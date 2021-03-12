#include<cstdio>
struct people{
    char name[6];
    int year;
    int month;
    int day;
}old={" ",2014,9,6},young={" ",1814,9,6},temp,left={" ",1814,9,6},right={" ",2014,9,6};
int equ(people a,people b){
    if(a.year!=b.year) return a.year-b.year;
    else{
        if(a.month!=b.month) return a.month-b.month;
        else {if(a.day!=b.day) return a.day-b.day;
                else return 0;
        }
    }
}
int main(){
    int n,youxiao=0;
    scanf("%d",&n);
    while(n--){
        scanf("%s %d/%d/%d",&temp.name,&temp.year,&temp.month,&temp.day);
        if(equ(temp,left)<0) continue;             //判断是否超过200岁
        else if(equ(temp,right)>0) continue;       //判断是否超过现在的日期
        youxiao++;                              //统计有效记录
        if(equ(temp,old)<=0) old=temp;
        if(equ(temp,young)>=0) young=temp;
    }
    youxiao>0?printf("%d %s %s\n",youxiao,old.name,young.name):printf("0\n");
    return 0;
}