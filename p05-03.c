#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int num1=0;

    printf("0부터 10 까지의 정수를 입력 하세요!\n");

    scanf("%d", &num1);

    if(num1 >= 0 && num1 <= 10)
        printf("%d 정답 입니다.\n", num1);
    else
        printf("틀렸습니다.\n");

    

    return 0;
}