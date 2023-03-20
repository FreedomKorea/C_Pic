/*
 */
#include <stdio.h>
#define NUM 5

int main(int argc, char *argv)
{
   int i=0;
   char ichar[1000];

   printf("문자열을 입력 하세요.\n");

   scanf("%s", &ichar);

   while(ichar[i] != '\0'){
   	i++;
   }

   printf("문자열의 크기는 %d 입니다.", i);


   return 0;
}
