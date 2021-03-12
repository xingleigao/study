#include<cstdio>
#include<cstring>
struct people{
    char name[11];
    char gender;
    char id[11];
    int grade;
}highf={" ",'F'," ",-1},lowm={" ",'M'," ",101},temp;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s %c %s %d",&temp.name,&temp.gender,&temp.id,&temp.grade);
        if(temp.gender=='F'){
            if(temp.grade>=highf.grade) highf=temp;
        }
        else {
            if(temp.grade<=lowm.grade) lowm=temp;
        }
    }
    highf.grade>-1?printf("%s %s\n",highf.name,highf.id):printf("Absent\n");
    lowm.grade<101?printf("%s %s\n",lowm.name,lowm.id):printf("Absent\n");
    if(highf.grade>-1&&lowm.grade<101) printf("%d\n",highf.grade-lowm.grade);
    else printf("NA\n");
    return 0;
}