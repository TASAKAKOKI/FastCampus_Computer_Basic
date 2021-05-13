#include <stdio.h>

int main(void)
{
    // 레지스터 변수를 사용시, 일반적인 변수를 사용할 때 보다 처리가 더 빠를 수 있을 것이라는 기대를 할 수 있음

    register int a = 10, i;
    for (i = 0; i < a; i++)
    {
        printf("%d ", i);
    }
    system("pause");
    return 0;
}