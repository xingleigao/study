#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct student{
    int num;
    char name[9];
    int score;
} stu[100001];

bool cmpnum(student a, student b){
    return a.num < b.num;
}

bool cmpscore(student a,student b){
    if(a.score != b.score) return a.score < b.score;
    else return cmpnum(a,b);
}

bool cmpname(student a, student b){
    if(strcmp(a.name, b.name))    return strcmp(a.name,b.name) < 0;
    else return cmpnum(a,b);
}

int main(){
    int n,i = 1,C;
    while(scanf("%d %d",&n,&C)!=EOF&&n!=0){
        for(int i = 0; i < n;++i) scanf("%d %s %d",&stu[i].num,stu[i].name,&stu[i].score);
        if(C == 1)  sort(stu, stu + n, cmpnum);
        else if (C == 2)    sort(stu, stu + n, cmpname);
        else    sort(stu,stu + n, cmpscore);
        printf("Case %d:\n",i++);
        for(int i = 0; i < n ; ++i) printf("%06d %s %d\n",stu[i].num,stu[i].name,stu[i].score);
    }
    return 0;
}