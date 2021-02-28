#include<cstdio>
int main(){
    struct student {
    int num;
    char name[20];
    char sex;
    int age;
    };
    int n;
    scanf("%d",&n);
    /*getchar();
    while(n--){
        char s[9999];
        gets(s);
        puts(s);
    }*/
    student s[n];
    for(int i=0;i<n;++i) scanf("%d %s %c %d",&s[i].num,s[i].name,&s[i].sex,&s[i].age);
    for(int i=0;i<n;++i) printf("%d %s %c %d\n",s[i].num,s[i].name,s[i].sex,s[i].age);
    return 0;
}