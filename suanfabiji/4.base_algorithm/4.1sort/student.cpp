#include<cstdio>
#include<cstring>

using namespace std;
struct Student{
    char name[10];
    char id[10];
    int score;
    int r;
}stu[10010];
bool cmp(Sturdent a,Student b){
    if ( a.score != b.score)    return a.score > b.score;
    else return strcmp(a.neme, b.name) < 0;
}