#include<stdio.h> 
#include<string.h>
int main()
{
    struct person {
    char name[20];
    int count;
    }leader[3] = {"Li",0,"Zhang",0,"Fun",0};

    int n;
    scanf("%d",&n) ;

    char a[20];
    for(int i=0;i<n;i++){
        scanf("%s",&a);//此处若写成 gets(a); 上一句for的条件就得变成 i<=n; 还没明白为啥
        for(int j=0;j<3;j++){
            if(!strcmp(a,leader[j].name)) leader[j].count++;
        }
    }

    for(int i=0;i<3;i++){
        printf("%s:%d\n",leader[i].name,leader[i].count);
    }

    return 0;
 } 