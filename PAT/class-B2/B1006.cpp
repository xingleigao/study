#include<cstdio>
int main(){
    int num, ans[5], wei = 0;
    scanf("%d",&num);
    //int b = num / 100, s = num % 100 / 10, g = num % 10;
    while(num > 0){
        ans[wei++] = num % 10;
        num /= 10;
    }

    for(int j= wei - 1; j >= 0; j--)
        if(j == 2)
            for(int i = 0; i < ans[j]; ++i) printf("B");
        else if(j == 1)
            for(int i = 0; i < ans[j]; ++i) printf("S");
        else if(j == 0)
            for(int i = 0; i < ans[j]; ++i) printf("%d", i + 1);

    puts("");

    return 0;
}