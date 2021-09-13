#include<cstdio>
char shuzibiao[10][5] = {"ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main(){
    char n[101];
    scanf("%s",n);
    int i = 0,sum = 0,num[3];
    while(n[i] != '\0')
        sum += n[i++] - '0';
    //printf("%d",sum);
    
    if(sum == 0){
        printf("ling\n");
        return 0;
    }
    
    i = 0;
    while(sum > 0){
        num[i++] = sum % 10;
        sum /= 10; 
    }

    for(int j = i-1; j > 0; j--){
        printf("%s",shuzibiao[num[j]]);
        if(j)   printf(" ");
    }
    puts("");
    return 0;
}