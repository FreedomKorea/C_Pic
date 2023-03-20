#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int i;

    printf("1 ~ 10 가운데 짝수를 출력 합니다.\n");

    for(i=1; i<=10; i++){
        if( (i%2) == 0 )
            printf("%d\n", i);
    }


    return 0;
}