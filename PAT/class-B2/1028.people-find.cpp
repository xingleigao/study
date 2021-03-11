#include<cstdio>
struct people{
    char name[6];
    int year;
    int month;
    int day;
}old,young,temp;
int main(){
    int n,youxiao=0;
    scanf("%d",&n);
    old.year=2014;
    old.month=9;
    old.day=7;
    young.year=1814;
    young.month=9;
    young.day=5;
    while(n--){
        scanf("%s %d/%d/%d",&temp.name,&temp.year,&temp.month,&temp.day);
        if(temp.year<1814) continue;
        else if(temp.year==1814) {
            if(temp.month<9) continue;
            else if(temp.month==9) if(temp.day<6) continue;
        }
        else if(temp.year>2014) continue;
        else if(temp.year==2014) {
            if(temp.month>9) continue;
            else if(temp.month==9) if(temp.day>6) continue;
        }
        youxiao++;
        if(temp.year>young.year) young=temp;
        else if(temp.year==young.year) {
            if(temp.month>young.month) young=temp;
            else if(temp.month==young.month) if(temp.day>young.day) young=temp;
        }
        if(temp.year<old.year) old=temp;
        else if(temp.year==old.year) {
            if(temp.month<old.month) old=temp;
            else if(temp.month==old.month) if(temp.day<old.day) old=temp;
        }      
    }
    youxiao>0?printf("%d %s %s\n",youxiao,old.name,young.name):printf("0\n");
    return 0;
}