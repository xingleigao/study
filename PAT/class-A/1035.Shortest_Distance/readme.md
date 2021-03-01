---
 description: 1035 Shortest Distance (20)
---

## 题目描述
The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between any pair of exits.

## 输入格式
Each input file contains one test case.  For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits.  All the numbers in a line are separated by a space.  The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers, provided that the exits are numbered from 1 to N.  It is guaranteed that the total round trip distance is no more than 107.

## 输出格式
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.

## 输入样例：
5 1 2 4 14 9<br>
3<br>
1 3<br>
2 5<br>
4 1

## 输出样例：
3<br>
10<br>
7<br>

## 分析
1. 对距离进行预处理，读入时生成dis数组，存储每个i+1个点到1点的距离，其中dis[n]为一圈的距离；
2. 计算距离即比较dis[right-1]-dis[left-1]与sum-xxx的距离