# 亲密数
1. 计算数A的各因子的算法：用A依次对i（i的范围可以是1〜A-1、1〜（A/2-1）中之一） 进行模（“%”，在编程过程中一定注意求模符号两边参加运算的数据必须为整数）运算，若模运算结果等于0，则i为A的一个因子加；否则i就不是A的因子。将所求得的因子累到变量B。
2. 变量B的因子：算法同上，将B的因子之和累加到变量n。根据亲密数的定义判断变量n是否等于变量A(if(n==a))，若相等，则A和B是一对亲密数，反之则不是。