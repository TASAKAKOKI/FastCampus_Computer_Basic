#include <stdio.h>

int main(void)
{
    int a = 7;
    if (1)
    { // if문 블록 안에서 만들어진 변수 a는 바깥쪽 변수 a의 변수와 다르게 if문 안에서만 메모리 영역에 할당되고 if문으 끝나면 해제된다.
        // if문 밖의 변수 a를 사용하고 싶은 것이라면, int 키워드 없이 a를 재할당 해주어야 한다.
        int a = 5;
    }
    printf("%d\n", a);
    system("pause");
    return 0;
}