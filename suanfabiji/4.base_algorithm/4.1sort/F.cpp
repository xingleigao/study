#include<cstdio>
#include<algorithm>
using namespace std;

struct xiaobaishu{
    int weight;
    char color[11];
}shu[101];

bool cmp(xiaobaishu a, xiaobaishu b){
    return a.weight > b.weight;
}

int main(){
    int n;
    while( scanf ("%d", &n) != EOF){
        for(int i = 0; i < n; ++i)  scanf("%d %s",&shu[i].weight,shu[i].color);
        sort(shu, shu + n, cmp);
        for(int i = 0; i < n;++i)   printf("%s\n",shu[i].color);
    }
    return 0;
}