# 日期函数
   1.  函数的实参为结构体变量，则对应函数的形参应该也是结构体变量
   2.  传递方式和普通变量一样，采用的是值传递方式。如程序代码中的 dayofyear()、cmpdate() 和 interday() 函数的形参均为结构体 Date 的变量，在程序调用时实参也为结构体 Date 的变量。