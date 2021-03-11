#include<cstdio>
#include<cstring>
int main(){
    int n,high=-1,low=101,score;
    char h_name[11],h_id[11],l_name[11],l_id[11],name[11],id[11];
    scanf("%d",&n);
    while(n--){
        scanf("%s%s%d",&name,&id,&score);
        if(score>high) {strcpy(h_name,name);strcpy(h_id,id);high=score;}
        if(score<low) {strcpy(l_name,name);strcpy(l_id,id);low=score;}
    }
    printf("%s %s\n%s %s\n",h_name,h_id,l_name,l_id);
    return 0;
}