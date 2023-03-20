#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int i, j;

    for(j=1; j<=9; j++) {
        for(i=1; i<=9; i++)
            printf("%2d  ", i*j);
        putchar('\n');
    }

    return 0;
}