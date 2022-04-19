/*变量是程序可操作的储存区的名称，类型决定了变量储存的大小和布局，
该范围都可以储存在内存中，运算符可以应用与变量上*/
// sign exponent
#include <windows.h>

int i, j, k;
char c, ch;
float f, salary;
double d;
// 声明的时候初始化
extern int d = 3, f = 5;
int d  = 3, f = 5;
byte z = 22;
char x = 'x';
// 不带初始化的定义，带有静态储存时间的变量会被隐式初始化为NULL，
// extern external 外部的