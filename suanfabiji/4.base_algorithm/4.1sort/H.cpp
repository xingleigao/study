#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    if(a % 2 == 1 && b % 2 == 0) return 1;
    else if( a % 2 == 0 && b % 2 ==1)   return 0;
    else if(a % 2 == 1 ) return a > b;
    else return a < b;
}

int main(){
    int a[10];
    while(scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]) != EOF){
        sort(a , a + 10, cmp);
        for(int i = 0; i< 10; ++i)  printf("%d ",a[i]);
        puts("");
    }
    return 0;
}