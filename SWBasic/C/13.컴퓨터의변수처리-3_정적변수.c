#include <stdio.h>

void process()
{
    // 초기에 적재할 때만 실행되는 코드
    static int a = 5;

    // 데이터 영역에 적재된 이후부터는 이 부분만 실행됨
    a = a + 1;
    printf("%d\n", a);
}

int main(void)
{
    process();
    process();
    process();
    process();
    system("pause");
    return 0;
}