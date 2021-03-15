#include<cstdio>
#include<cstring>
char week[7][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int year[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
bool isLeap(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
};
int toMonth(char m[20]){
    for(int i=0;i<13;i++) if(strcmp(m,month[i])==0) return i+1;
    return 0;
}
int main(){
    int time1,y1,m1,d1;
    char m[20];
    int time2,y2,m2,d2;
    while(scanf("%d %s %d",&d1,&m,&y1)!=EOF){
        m1=toMonth(m);
        int flag=0;
        time1=d1+m1*100+y1*10000;
        int ans=0;
        if(time1>20130107){
                time2=time1;
                time1=20130107;
                flag=1;
        }
        else time2=20130107;
        y1=time1/10000;m1=time1%10000/100;d1=time1%100;
        y2=time2/10000;m2=time2%10000/100;d2=time2%100;
        //printf("%d %d %d",y1,m1,d1);
        //printf("%d %d %d",y2,m2,d2);
        while(y1<y2||m1<m2||d1<d2){
            d1++;
            if(d1==year[m1][isLeap(y1)]+1){
                m1++;
                d1=1;
            }
            if(m1==13){
                y1++;
                m1=1;
            }
            ans++;
        }
        //printf("%d %d",ans,flag);
        flag==0?printf("%s\n",week[6-(ans-1)%7]):printf("%s\n",week[ans%7]);
    }
    return 0;
}