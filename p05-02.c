#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int num1=0, num2=0;

    printf("두개의 정수를 입력 하세요!\n");

    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("%d 보다 %d (이)가 큰 값입니다.\n", num2, num1);

    else if(num1 < num2)
        printf("%d 보다 %d (이)가 큰 값입니다.\n", num1, num2);

    return 0;
}