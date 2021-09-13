#include<cstdio>

char a[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};

int main(){
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    printf("#%c%c%c%c%c%c\n",a[r / 13], a[r % 13] ,a[g / 13], a[g % 13] ,a[b / 13], a[b % 13]);
    return 0;
}