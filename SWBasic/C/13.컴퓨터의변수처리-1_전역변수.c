#include <stdio.h>

int a = 5;

void ChangeValue()
{
    a = 10;
}

int main(void)
{
    printf("%d\n", a);
    ChangeValue();
    printf("%d\n", a);
    system("pause");
    return 0;
}