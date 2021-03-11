#include<cstdio>
#include<cstring>
struct student{
    char id[20];
    char name[20];
    char sex[10];
    int age;
}stu[20];
int main(){
    int m,n;
    char temp[20];
    scanf("%d",&m);
    for(int i=0;i<m;++i){
        scanf("%d",&n);
        for(int j=0;j<n;++j){
            scanf("%s %s %s %d",&stu[j].id,&stu[j].name,&stu[j].sex,&stu[j].age);
        }
        scanf("%s",&temp);
        for(int j=0;j<n;++j){
             if(strcmp(temp,stu[j].id)==0){
                printf("%s %s %s %d\n",stu[j].id,stu[j].name,stu[j].sex,stu[j].age);
                break;
             }
        }
    }
    return 0;
}
