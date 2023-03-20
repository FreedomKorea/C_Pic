#include <stdio.h>

int power(int x, int y)
{
    int zero=0, ans=1;

    for(zero; zero<y; zero++)
        ans *= x;

    return ans;
}

int main(int argc, char *argv[])
{
    int x, y, ans;

    printf("1번째 정수를 입력 하세요.(1~5)\n");
    scanf("%d", &x);

    printf("2번째 정수를 입력 하세요.(1~5)\n");
    scanf("%d", &y);

    ans = power(x, y);

    printf("%d 의 %d 제곱은 %d 입니다.", x, y, ans);

    return 0;
}