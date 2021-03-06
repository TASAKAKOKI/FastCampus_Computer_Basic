#include <stdio.h>

// scanf()함수는 공백을 만날 때까지 입력을 받지만,
// gets()함수는 공백까지 포함하여 한 줄을 입력 받는다.
int main(void)
{
    char a[100];
    // gets()에 인자로 a배열을 전달하여,
    // 공백을 포함하여 입력된 한 줄을 배열에 저장한다.
    gets(a);
    // gets()함수는 배열의 전체 범위를 고려하지 않는다는 점에서, 보안상의 위험성이 있다고 판단되어, deprecated되었다.
    // 실무에서는 gets()가 아닌 gets_s()를 사용한다.

    // gets()함수는 버퍼의 크기를 벗어나도 입력을 받아버리는 반면,
    // C11표준부터는 버퍼의 크기를 철저히 지키는 gets_s()함수가 추가되었다.
    // gets_s()이용시, 범위를 넘어서는 문자열을 제공할시, 그 즉시 런타임(Runtime)오류가 발생한다.
    printf("%s\n", a);
    system("pause");
    return 0;
}