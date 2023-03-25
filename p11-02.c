#include <stdio.h>

typedef struct{
  int age;
  float weight;
  float height;
}man;

int main(int argc, char *argv[])
{
  int i;
  man human[2];

for(i=0; i<2; i++) {
  printf("나이를 입력하세요\n");
  scanf("%d", &human[i].age);

  printf("몸무게를 입력하세요\n");
  scanf("%f", &human[i].weight);

  printf("키를 입력하세요\n");
  scanf("%f", &human[i].height);
}

for(i=0; i<2; i++)
printf("나이 %d 몸무게 %.2f 키 %.2f 입니다.\n", human[i].age, human[i].weight, human[i].height);

return 0;
}