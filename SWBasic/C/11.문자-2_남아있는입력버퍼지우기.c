#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 입력버퍼로 인해 흔히 발생하는 오류를 해결하기 위해
// 남아 있는 입력 버퍼를 지우기
// 숫자와 문자를 동시에 입력받는 경우에는 이처럼
// 중간에 입력버퍼를 지워주는 코드를 추가하여 오류를 방지할 수 있다.
int main(void)
{
    int a;
    char c;
    scanf("%d", &a);
    printf("a is %d\n", a);

    int temp;
    // 한 자씩 받아서 '파일의 끝(EOF)'이거나 '개행문자('\n')'를 만나면 입력을 멈추므로 항상 입력 버퍼를 비운다.
    while ((temp = getchar()) != EOF && temp != '\n')
    {
    }

    scanf("%c", &c);
    printf("c is %c\n", c);
    system("pause");
    return 0;
}