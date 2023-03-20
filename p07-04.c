/*
 */
#include <stdio.h>
#define NUM 5

int main(int argc, char *argv)
{
   int count=0, i=0;
   char ichar[1000];

   printf("문자열을 입력 하세요.\n");

   scanf("%s", &ichar);

   while(ichar[i] != '\0'){
   	if(ichar[i] == 'a')
   		count++;
   	i++;
   }

   printf(" %s 안에 a는 %d 개 있습니다.", ichar, count);

   return 0;
}
