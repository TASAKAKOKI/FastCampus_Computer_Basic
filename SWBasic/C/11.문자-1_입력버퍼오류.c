#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 입력버퍼로 인해 흔히 발생하는 오류
int main(void)
{
    int a;
    char c;
    // 정수형 데이터를 입력받고, 정수형 데이터를 출력한 뒤,
    scanf("%d", &a);
    printf("a is %d\n", a);
    // 문자형 데이터를 입력받고, 문자형 데이터를 출력하고자 함.
    scanf("%c", &c);
    printf("c is %c\n", c);
    system("pause");
    // 실행해보면 바로 프로그램이 종료됨을 확인 할 수 있음
    // 이는 줄바꿈이나 공백, 엔터 등도 아스키코드가 있는데,
    // 엔터를 입력하는 순간, 엔터 자체를 문자로 인식하여 c에 저장하기 때문에 실행이 종료되는 것이다.
    return 0;
}