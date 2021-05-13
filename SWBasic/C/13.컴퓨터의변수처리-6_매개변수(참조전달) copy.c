#include <stdio.h>

void add(int *a)
{
    // 참조에 의한 전달 방식은 함수의 매개변수 값을 전달하는 것이 아니라 변수의 주소를 전달함.
    // 이렇게 하면 원래 변수의 값에 접근하여 변수의 값 변경이 가능하다
    *a = (*a) + 10;
}
int main(void)
{
    int a = 7;
    add(&a);
    printf("%d\n", a);
    system("pause");
    return 0;
}