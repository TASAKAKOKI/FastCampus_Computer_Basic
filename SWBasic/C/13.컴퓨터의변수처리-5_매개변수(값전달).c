#include <stdio.h>

void add(int a, int b)
{
    // a는 함수 안에서만 작용하는 변수처럼 사용되므로,
    // 기존의 변수 a의 값은 변화되지 않는다.
    a = a + b;
}
int main(void)
{
    int a = 7;
    add(a, 10);
    printf("%d\n", a);
    system("pause");
    return 0;
}