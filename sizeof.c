#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int �����С �� %lu \n", sizeof(int));

    printf("float ��������ֽ��� �� %lu \n", sizeof(float ));
    printf("float ��Сֵ : %E\n", FLT_MIN);
    printf("float ���ֵ%d \n",FLT_MAX);
    printf("����ֵ�� %d \n",FLT_DIG);

return 0;
}