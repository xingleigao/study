#include<cstdio>
#include<cstring>
int main(){
    int n,youxiao=0;
    scanf("%d",&n);
    char minStr[12]="9",minName[6]="",maxStr[12]="0",maxName[6]=" ",start[12]="1814/09/06",end[12]="2014/09/06",name[6],str[12];
    while(n--){
        scanf("%s %s",&name,&str);
        if(strcmp(str,start)>=0&&strcmp(str,end)<=0){//判断边界
            youxiao++;
            if(strcmp(minStr,str)>=0) {strcpy(minStr,str);strcpy(minName,name);}
            if(strcmp(maxStr,str)<=0) {strcpy(maxStr,str);strcpy(maxName,name);}
        }
    }
    youxiao>0?printf("%d %s %s\n",youxiao,minName,maxName):printf("0\n");
    return 0;
}