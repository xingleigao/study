#include<cstdio>

int main(){
    char s[2][101];
    int n = 0;
    while(scanf("%s",s[n])!=EOF){
        n++;
        if(n == 2){
            printf("%s%s\n",s[0],s[1]);
            n = 0;
        }
    }
    return 0;
}