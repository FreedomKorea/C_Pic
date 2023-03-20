#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main(int argc, char *argv[])
{
    int num1, ans;

    printf("정수를 입력 하세요\n");
    scanf("%d", &num1);

    ans = square(num1);

    printf(" %d의 제곱은 %d 입니다.\n", num1, ans);

    return 0;
}