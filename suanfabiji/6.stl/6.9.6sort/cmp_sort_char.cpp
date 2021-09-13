#include<cstdio>
#include<algorithm>
using namespace std;

bool cmp(char a, char b){
    return a > b;
}
int main(){
    char c[] = {'T', 'W', 'A', 'K'};
    sort(c, c + 4, cmp);
    for(int i = 0; i < 4; ++i)  printf("%c ",c[i]);
    return 0;
}