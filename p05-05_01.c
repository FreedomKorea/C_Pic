#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int num=0;

    printf("성적을 입력 하세요 !\n");
    
    scanf("%d", &num);

    if(num >= 1 && num <= 5) { // 1~5사이의 값을 입력 받는다. 
        printf("성적은 %d 입니다.\n", num);
        switch(num)
        {
            case 1:
                printf("노력이 필요 합니다.\n"); 
                break;
            case 2:
                printf("조금 더 노력 하세요.\n");
                break;
            case 3:
                printf("잘 했습니다.\n");
                break;
            case 4:
                printf("매우 잘 했습니다..\n");
                break;
            case 5:
                printf("매우 우수 합니다.\n");
                break;
            default:
                break;
        }
    }
    else // 1~5 사이의 값이 아니면 졸료
        printf("1 ~ 5 사이의 값을 입력 하세요!\n");

    return 0;
}