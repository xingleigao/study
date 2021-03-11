#include<cstdio>
typedef struct {
    char id[17];
    int jishi;
    int kaoshi;
}student;
int main(){
    int n,chan,cha;
    scanf("%d",&n);
    student stu[n];
    for(int i=0;i<n;++i) scanf("%s %d %d",&stu[i].id,&stu[i].jishi,&stu[i].kaoshi);
    scanf("%d",&chan);
    while(chan--){
        scanf("%d",&cha);
        for(int i=0;i<n;++i)
            if(stu[i].jishi==cha) printf("%s %d\n",stu[i].id,stu[i].kaoshi);
    }
    return 0;
}

//char一定要开大一个字符，最后一个作为/0结束符，不然输出的时候会继续往后读会读到jishi变量的结尾