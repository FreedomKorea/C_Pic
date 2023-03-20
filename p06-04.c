#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int i, j;

    for(j=0; j<5; j++) {
        for(i=0; i<=j; i++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}