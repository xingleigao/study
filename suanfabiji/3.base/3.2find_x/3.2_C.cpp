#include<cstdio>
#include<cstring>
using namespace std;
const int max=1010;
struct student{
    char id[100];
    char name[100];
    char sex[2];
    int age;
}stu[max];
int main(){
    int n,m,flag;
    char temp[4];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;++i)  scanf("%s%s%s%d",&stu[i].id,&stu[i].name,&stu[i].sex,&stu[i].age);
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            scanf("%s",temp);
            flag=-1;
            for(int j=0;j<n;j++){ if(strcmp(stu[j].id,temp)==0) flag=j;}
            flag==-1?printf("No Answer!\n"):printf("%s %s %s %d\n",stu[flag].id,stu[flag].name,stu[flag].sex,stu[flag].age);
        }
    }
    return 0;
}
