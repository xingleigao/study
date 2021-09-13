#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct student{
    char id[21];
    int score;
}stu[10001];

bool cmp(student a, student b){
    if(a.score != b.score) return a.score > b.score;
    else return strcmp(a.id, b.id) < 0;
}

int main(){
    int n, m, g;
    while(scanf("%d",&n) && n!= 0){
        scanf("%d %d", &m , &g);
        int s[m],num = 0;
        for(int i = 0; i < m; ++i)  scanf("%d",&s[i]);
        for(int i = 0; i < n; ++i){
            scanf("%s",stu[i].id);
            stu[i].score = 0;
            int ms,mn;
            scanf("%d",&ms);
            for( int j = 0; j < ms; ++j){
                scanf("%d",&mn);
                stu[i].score += s[mn-1];
            }
            if(stu[i].score >= g)   num++;
        }
        sort(stu, stu + n, cmp);
        printf("%d\n",num);
        for(int i = 0;i < n; ++i)   printf("%s %d\n",stu[i].id,stu[i].score);
    }
    return 0;
}