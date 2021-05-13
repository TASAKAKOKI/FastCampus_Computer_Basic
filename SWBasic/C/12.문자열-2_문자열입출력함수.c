#include <stdio.h>
// 최근 c언어는 기본적으로 문자열함수를 포함하는 경우가 많아 생략 가능.
// #include <string.h>

int main(void)
{
    printf("strlen()사용\n\t");
    char a[20] = "Tasaka Koki";
    printf("%d\n", strlen(a));

    printf("strcmp()사용\n\t");
    char b[20] = "Tasaka Koki";
    char c[20] = "Koki Tasaka";
    printf("두 문자열의 사전 순 비교: %d\n", strcmp(b, c));

    printf("strcpy()사용\n\t");
    char d[20] = "Tasaka Koki";
    char e[20] = "I will be modify";
    strcpy(d, e);
    printf("문자가 제대로 복사 되었는지 확인: %s\n", d);

    printf("strcat()사용\n\t");
    char f[40] = "My name is";
    char g[20] = " Tasaka Koki";
    strcat(f, g);
    printf("문자열이 제대로 합쳐졌는지 확인: %s\n", f);

    printf("strstr()사용\n\t");
    // 긴 문자열에서 짧은 문자열을 찾아 그 위치를 반환
    // 짧은 문자열을 찾은 주소 값 자체를 반환하므로, 단순히 출력하도록 하면, 찾은 이후 모든 문자열이 반환된다.
    char h[40] = "My name is Tasaka Koki";
    char i[20] = "Tasaka";
    printf("문자열을 제대로 찾았는지 확인: %s\n", strstr(h, i));
    return 0;
}
