#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int i, sum=0;

    printf("시험 점수를 입력 하세요 (0이면 종료).\n");

    while(i){
        scanf("%d", &i); // 0 이면 종료
        sum += i; // 0 이 들어오긴 전까지 입력된 수를 계속 더함
    }

    printf("시험 점수의 합계는 %d 입니다", sum);

    return 0;
}