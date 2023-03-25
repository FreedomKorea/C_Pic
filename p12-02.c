#include <stdio.h>

int main(int argc, char *argv[])
{
 FILE *fp;
 int hL, vL;

 fp = fopen("result.txt", "w");
 if(fp == NULL)
  printf("파일을 열수 없습니다.\n");

for(vL=1; vL<6; vL++) {
 for(hL=1; hL<6; hL++)
  fprintf(fp, "%4d", hL * vL);

  fprintf(fp, "\n");
}

fclose(fp);
printf("파일에 기록 했습니다.\n");

return 0;
}