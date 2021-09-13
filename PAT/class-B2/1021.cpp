#include<cstdio>
#include<cstring>
int sum[10] = {0};
int main(){
    char num[1005];
    scanf("%s", num);
    
    for(int i = 0; i < strlen(num); ++i)
        sum[num[i] - '0'] ++ ;

    for(int i = 0; i < 10; ++i)
        if(sum[i])
            printf("%d:%d\n",i,sum[i]);

    
    return 0;
}