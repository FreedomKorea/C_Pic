#include <stdio.h>

int main(int argc, char *argv[])
{
 int hL, vL;

for(vL=1; vL<6; vL++) {
 for(hL=1; hL<6; hL++)
  printf("%4d", hL * vL);
  putchar('\n');
}


  return 0;
}