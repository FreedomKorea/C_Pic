#include <stdio.h>

void add(int *x1, int *x2, int a)
{
    *x1 += a;
    *x2 += a;
    printf("과목 1은(는) %d이 되었습니다.\n", *x1);
    printf("과목 2은(는) %d이 되었습니다.\n", *x2);
}

int main(int argc, char* argv[])
{    
    int x1, x2, a;

    printf("두 과목의 점수를 입력하세요.\n");
    scanf("%d", &x1);
    scanf("%d", &x2);

    printf("더 할 점수를 입력하세요.\n");
    
    scanf("%d", &a);
    printf("%d 점을 더했기 때문에\n", a);

    add(&x1, &x2, a);

    

    return 0;
}