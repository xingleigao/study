#include<cstdio>
char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int quan[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int main(){
    int n;
    bool flag = true;
    while(scanf("%d",&n) != EOF){
        while(n--){
            bool flag1 = true;
            char num[19];
            int sum = 0,i;
            scanf("%s", num);
            for(i = 0; i < 17; ++i)
                if(num[i] <= '9' &&num[i] >= '0')
                    sum += quan[i]*(num[i] - '0');
                else
                    break;
            
            if(M[sum % 11] == num[17] && i == 17){
                continue;
                printf("N");
            }
            
            if(flag){
                printf("%s",num);
                flag1 = false;
            }
            else printf("\n%s",num);
            flag = false;
        }
        if(flag)
            printf("All passed");
    }
    return 0;
}