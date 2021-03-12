#include<cstdio>
#include<cstring>
int main(){
    char id[16],signin[9],signout[9],firstId[16],firstSignin[9]="9",lastId[16],lastSignout[9]="00:00:00";
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s %s %s",&id,&signin,&signout);
        if(strcmp(signin,firstSignin)<=0) {strcpy(firstId,id);strcpy(firstSignin,signin);}
        if(strcmp(signout,lastSignout)>=0){strcpy(lastId,id);strcpy(lastSignout,signout);}
    }
    printf("%s %s\n",firstId,lastId);
    return 0;
}