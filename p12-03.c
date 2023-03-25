#include <stdio.h>

int main(int argc, char *argv[])
{
 FILE *fp;
 int hL, vL, ch;

if(argc != 2) {
  printf("매개번수가 다릅니다. \n");
  return 1;
}

if(fp == NULL) {
  printf("파일을 열수 없습니다.\n");
  return 1;
}

fp = fopen(argv[1], "w");

for(vL=1; vL<6; vL++) {
 for(hL=1; hL<6; hL++)
  fprintf(fp, "%4d", hL * vL);

  fprintf(fp, "\n");
}

fclose(fp);
printf("파일에 기록 했습니다.\n");

return 0;
}