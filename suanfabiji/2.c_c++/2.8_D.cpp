#include<cstdio>
struct student{
    int id;
    char name[20];
    int a,b,c;
}stu[10];
void input(){
    for(int i=0;i<10;++i)
    scanf("%d %s %d %d %d",&stu[i].id,stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
}
void produce(){
    double max=((double)stu[0].a+(double)stu[0].b+(double)stu[0].c)/3.0,av;
    int maxi=0;
    int a1=0,b1=0,c1=0;
    for(int i=0;i<10;++i){
        a1+=stu[i].a;
        b1+=stu[i].b;
        c1+=stu[i].c;
        av=((double)stu[i].a+(double)stu[i].b+(double)stu[i].c)/3.0;
        if(av>max){max=av;maxi=i;}  
    }
    double s1,s2,s3;
    s1=(double)a1/10.0;
    s2=(double)b1/10.0;
    s3=(double)c1/10.0;
    printf("%.2f %.2f %.2f\n%d %s %d %d %d\n",s1,s2,s3,stu[maxi].id,stu[maxi].name,stu[maxi].a,stu[maxi].b,stu[maxi].c);
}
int main(){
    int a1=0,b1=0,c1=0;
    input();
    produce();
    return 0;
}