#include<cstdio>

int main(){
    struct person {
    char name[20];
    int count;
    }leader[3] = {"Li",0,"Zhang",0,"Fun",0};
    int n;
    scanf("%d",&n);
    char xuan[20];
    while(n--){
        scanf("%s",xuan);
        if(xuan[0]=='L') leader[0].count++;
        if(xuan[0]=='Z') leader[1].count++;
        if(xuan[0]=='F') leader[2].count++;
    }
    for(int i=0;i<3;++i) printf("%s:%d\n",leader[i].name,leader[i].count);
    return 0;
}