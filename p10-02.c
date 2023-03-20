#include <stdio.h>

int search(char str[])
{
    int i, count=0;

    for(i=0; str[i] !='\0'; i++) {
        if(str[i] == 'a') // 문자열중에 a 가 있으면
            count++; // 카운트 1씩 증가
    }

    return count;
}

int main(int argc, char * argv[])
{
    char str[100];
    int ans=0;

    printf("문자열을 입력 하세요\n");

    scanf("%s", str);

    ans = search(str);

    printf("%s 안에 a는 %d 개 있습니다.", str, ans);

    return 0;
}