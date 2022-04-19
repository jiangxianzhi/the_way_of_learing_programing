#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int 储存大小 ： %lu \n", sizeof(int));

    printf("float 初春最大字节数 ： %lu \n", sizeof(float ));
    printf("float 最小值 : %E\n", FLT_MIN);
    printf("float 最大值%d \n",FLT_MAX);
    printf("精度值： %d \n",FLT_DIG);

return 0;
}