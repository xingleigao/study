时间限制 1000 ms 内存限制 32768 KB 代码长度限制 100 KB 判断程序 Standard
# 题目描述
字符串APPAPT中包含了两个单词“PAT”，其中第一个PAT是第2位(P),第4位(A),第6位(T)；第二个PAT是第3位(P),第4位(A),第6位(T)。
现给定字符串，问一共可以形成多少个PAT？
# 输入描述
输入只有一行，包含一个字符串，长度不超过105，只包含P、A、T三种字母。
# 输出描述:
在一行中输出给定字符串中包含多少个PAT。由于结果可能比较大，只输出对1000000007取余数的结果。
# 输入例子
APPAPT
# 输出例子
2
分析
要想知道构成多少个PAT，那么遍历字符串后对于每一A，它前面的P的个数和它后面的T的个数的乘积就是能构成的PAT的个数。然后把对于每一个A的结果相加即可～～辣么就简单啦，只需要先遍历字符串数一数有多少个T～～然后每遇到一个T呢～～countt–;每遇到一个P呢，countp++;然后一遇到字母A呢就countt * countp～～把这个结果累加到result中～～最后输出结果就好啦~~对了别忘记要对10000000007取余哦～～