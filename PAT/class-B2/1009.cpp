#include<cstdio>

int main(){
    int num = 0;
    char ans[90][90];
    while (scanf("%s",ans[num]) != EOF)
        num++;
    for(int i = num - 1; i >= 0; --i){
        printf("%s",ans[i]);
        if(i)   printf(" ");
    }
    puts("");
    
    return 0;
}