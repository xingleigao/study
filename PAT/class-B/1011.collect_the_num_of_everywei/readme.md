---
个位数统计 (15)
---
>时间限制 1000 ms 内存限制 32768 KB 代码长度限制 100 KB 判断程序 Standard
## 题目描述
>给定一个k位整数N = dk-1*10k-1 + ... + d1*101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定N = 100311，则有2个0，3个1，和1个3。
## 输入描述
>每个输入包含1个测试用例，即一个不超过1000位的正整数N。
## 输出描述
>对N中每一种不同的个位数字，以D:M的格式在一行中输出该位数字D及其在N中出现的次数M。要求按D的升序输出。
## 输入例子
>100311
## 输出例子
>0:2
1:3
3:1

## 自己的思考
直接进行读入 然后用计数数组进行统计输出
```c

```