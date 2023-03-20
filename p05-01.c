#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int in=0;

    puts("정수를 입력 하세요 !");

    scanf("%d", &in);

    if( (in%2) == 0)
        puts(" 짝수 입니다.");
    else
        puts(" 홀수 입니다.");

    return 0;
}