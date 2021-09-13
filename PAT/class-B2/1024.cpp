#include<cstdio>
int main(){
    char num[10000];
    scanf("%s",num);
    if(num[0] == '-')   printf("-");
    int ewei = 0,e = 0;
    for(int i = 0;num[i] != '\0';++i)
        if(num[i] == 'E'){
            ewei = i;
            break;
        }

    for(int i = ewei + 2;num[i] != '\0';++i)
        e = e * 10 + num[i] - '0';
    if(e == 0){
        for(int i = 1; i < ewei; ++i)  printf("%c",num[i]);
    }
    else{
        if(num[ewei + 1] == '-'){
            printf("0.");
            for(int i = 0;i < e - 1; i++)   printf("0");
            putchar(num[1]);
            for(int i = 3; i < ewei; ++i)  printf("%c",num[i]);
        }
        else{
            for(int i = 1;i < ewei; ++i){
                if(num[i] == '.') continue;
                else    printf("%c",num[i]);
                if(i == e + 2 && ewei - 3 != e) printf(".");
            }
            for(int i = 0; i < e - ewei + 3; ++i)   printf("0");
            
        }
    }
    puts("");
    return 0;
}