#include <cstdio>
using namespace std;
const int nowyear=2014;
const int  nowmonth=9;
const int  nowday=6;

typedef struct{
    char name[5];
    int year;
    int month;
    int day;
} people;
void equr(people &a,people &b){
    for(int i=0;i<5;++i){a.name[i]=b.name[i];}
    a.year=b.year;
    a.month=b.month;
    a.day=b.day;
}
int main(){
    people num[3];
    int n;
    scanf("%d",&n);
    while(n>0){
        scanf("%s%d/%d/%d",num[3].name,&num[3].year,&num[3].month,&num[3].day);
        if(num[3].year<nowyear-200){                 //判断是否超过200岁
                n--;
                continue;
            }
            else if(num[3].year==nowyear-200) {
                if(num[3].month<nowmonth){
                n--;
                continue;
                }
                else if(num[3].month==nowmonth) if(num[3].day<nowday){
                n--;
                continue;
                }
            }
            if(num[3].year>nowyear){                 //判断是否超过当前日期
                n--;
                continue;
            }
            else if(num[3].year==nowyear) {
                if(num[3].month>nowmonth){
                n--;
                continue;
                }
                else if(num[3].month==nowmonth) if(num[3].day>nowday){
                n--;
                continue;
                }
            }
        break;
    }
    equr(num[0],num[3]);
    equr(num[1],num[3]);
    while(scanf("%s%d/%d/%d",num[3].name,&num[3].year,&num[3].month,&num[3].day)!=EOF){
        if(num[3].year<nowyear-200){                 //判断是否超过200岁
                n--;
                continue;
            }
            else if(num[3].year==nowyear-200) {
                if(num[3].month<nowmonth){
                n--;
                continue;
                }
                else if(num[3].month==nowmonth) if(num[3].day<nowday){
                n--;
                continue;
                }
            }
            if(num[3].year>nowyear){                 //判断是否超过当前日期
                n--;
                continue;
            }
            else if(num[3].year==nowyear) {
                if(num[3].month>nowmonth){
                n--;
                continue;
                }
                else if(num[3].month==nowmonth) if(num[3].day>nowday){
                n--;
                continue;
                }
            }
            if(num[3].year<num[1].year){                            //判断是否最小
                equr(num[1],num[3]);
            }
            else if(num[3].year==num[1].year) {
                if(num[3].month<num[1].month){
                    equr(num[1],num[3]);
                }
                else if(num[3].month==num[1].month) if(num[3].day<num[3].day){
                    equr(num[1],num[3]);
                }
            }
            if(num[3].year>num[0].year){                            //判断是否最大
                equr(num[0],num[3]);
            }
            else if(num[3].year==num[0].year) {
                if(num[3].month>num[0].month){
                    equr(num[0],num[3]);
                }
                else if(num[3].month==num[0].month) if(num[3].day>num[0].day){
                    equr(num[0],num[3]);
                }
            }
    }
    printf("%d %s %s",n,num[1].name,num[0].name);
    return 0;
}