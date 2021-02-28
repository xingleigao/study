#include<cstdio>
struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int Class;
        char position[10];
    }category;
}a[100];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d %s %c %c",&a[i].num,&a[i].name,&a[i].sex,&a[i].job);
        if(a[i].job=='s') scanf("%d",&a[i].category.Class);
        else if(a[i].job=='t') scanf("%s",&a[i].category.position);
        else return 0;
    }
    for(int i=0;i<n;++i){
        a[i].job=='s'?printf("%d %s %c %c %d\n",a[i].num,a[i].name,a[i].sex,a[i].job,a[i].category.Class):printf("%d %s %c %c %s\n",a[i].num,a[i].name,a[i].sex,a[i].job,a[i].category.position);
    }
    return 0;
}