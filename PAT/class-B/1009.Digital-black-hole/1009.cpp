/*
题目难度不大，但也需要注意几点：（1）各位都相同（2）不足4位 （3）排序问题
在各位都相同的情况下，只需要判断结果是否为0，为0则不必继续进行判断
不足4位，补全即可
排序问题，利用algorithm内的 sort() 和 reverse() 方法
对于这道题解法有很多种，笔者用的是字符串来存放输入的数，用到了字符串转整型 stoi() 和利用流将整型转字符串
笔者也利用了其他方式，此处不将赘述，具体可点击代码链接查看
*/
#include<iostream>
#include<algorithm>
using namespace std;
int * msort(int n)
{
    int a[4]{0},i=0;
    static int b[2];
    while(n!=0)
    {
        a[i] = n%10;
        n/=10;
        i++;
    }
    sort(a,a+4);
    b[0] = a[0]*1000+a[1]*100+a[2]*10+a[3];
    b[1] = a[3]*1000+a[2]*100+a[1]*10+a[0];
    return b;
}

int main()
{
    int n,* b;
    scanf("%d",&n);
    do{
        b = msort(n);
        if(b[0]==b[1])
        {
            printf("%d - %04d = %04d\n",b[1],b[0],b[1]-b[0]);
        }
        printf("%d - %04d = %04d\n",b[1],b[0],b[1]-b[0]);
    }while((n=b[1]-b[0])!=6174);
    return 0;
}
