#include <stdio.h>

int min(int x, int y)
{
    if(x < y)
        return x;
    else
        return y;
}

int main(int argc, char *argv[])
{
    int num1, num2, ans;

    printf("1번째 정수를 입력 하세요\n");
    scanf("%d", &num1);

    printf("1번째 정수를 입력 하세요\n");
    scanf("%d", &num2);

    ans = min(num1, num2);

    printf("최솟값은 %d 입니다.\n", ans);

    return 0;
}