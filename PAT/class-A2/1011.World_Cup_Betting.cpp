#include<cstdio>
const char name[3]={'W','T','L'};
int compy(double a,double b,double c){
    if(a>b){
        if(a>c) return 0;
        else return 2;
    }
    else{
        if(b>c) return 1;
        else return 2;
    }
}
int main(){
    double game[3],fine=1.0;
    for(int i=0;i<3;i++){
        scanf("%lf%lf%lf",&game[0],&game[1],&game[2]);
        int win=compy(game[0],game[1],game[2]);
        printf("%c ",name[win]);
        fine*=game[win];
    }
    printf("%.2f\n",(fine*0.65-1)*2);
    return 0;
}