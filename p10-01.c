#include <stdio.h>

int length(char str[])
{
    int i, count=0;

    for(i=0; str[i] !='\0'; i++)
        count++;

    return count;
}

int main(int argc, char * argv[])
{
    char str[100];
    int ans;

    printf("문자열을 입력 하세요\n");

    scanf("%s", str);

    ans = length(str);

    printf("문자수는 %d 입니다.", ans);

    return 0;
}