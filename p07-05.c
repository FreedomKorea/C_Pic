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

   while(ichar[i]){
   	if(ichar[i] == 'a')
   		ichar[i] = 'b';
   	i++;
   }

   printf(" %s 로 치환 했습니다.", ichar);

   return 0;
}
