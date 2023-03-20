#include <stdio.h>

int main(int argc, char *argv[])
{
    
    char res;

    printf("A~C 까지의 문자를 입력 하세요 ?\n");
    
    scanf("%c", &res);

    if(res == 'A' || res == 'a' || res == 'B' || res == 'b' || res == 'C' || res == 'c')
        printf(" 정답 입니다.");
    else
        printf(" 틀렸습니다.");    

    return 0;
}