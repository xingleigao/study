#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    char c [] = {'T', 'W', 'A', 'K'};
    sort(c, c+4);
    for(int i = 0; i < 4; ++i) printf("%c ", c[i]);
    return 0;
}