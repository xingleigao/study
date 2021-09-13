#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct student{
    char id[17];
    int score;
    int local;
    int local_rank;
}stu[30001];

bool cmp(student a, student b){
    if(a.score != b.score)  return a.score > b.score;
    else return strcmp(a.id, b.id) < 0; 
}

int main(){
    int N, K, num = 0;
    //数据接收 并对考场内用户进行排名
    scanf("%d",&N);
    for(int i = 0; i < N; ++i){
        //获取考场内考生数据
        scanf("%d",&K);
        for( int j = 0; j < K; ++j){
            scanf("%s %d",stu[num].id,&stu[num].score);
            stu[num].local = i + 1;
            num++;
        }
        //对考场内考生进行排名
        sort(stu + num - K,stu + num, cmp);
        stu[num - K].local_rank = 1;
        for(int j = num - K + 1; j < num; ++j)
            if(stu[j].score == stu[j - 1].score)
                stu[j].local_rank = stu[j - 1].local_rank;
            else
                stu[j].local_rank = j + 1 - num +K;
    }
    printf("%d\n",num);
    sort(stu,stu + num, cmp);
    int r = 1;
    for(int i = 0; i < num; ++i){
        if(i > 0 && stu[i].score != stu[i-1].score)
            r = i + 1;
        printf("%s ",stu[i].id);
        printf("%d %d %d\n", r, stu[i].local, stu[i].local_rank);
    }

    return 0;
}