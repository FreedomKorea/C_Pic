#include <stdio.h>

typedef struct{
  int age;
  float weight;
  float height;
}man;

int main(int argc, char *argv[])
{
  man human, human1;

  printf("나이를 입력하세요\n");
  scanf("%d", &human.age);

  printf("몸무게를 입력하세요\n");
  scanf("%f", &human.weight);

  printf("키를 입력하세요\n");
  scanf("%f", &human.height);

  printf("나이를 입력하세요\n");
  scanf("%d", &human1.age);

  printf("몸무게를 입력하세요\n");
  scanf("%f", &human1.weight);

  printf("키를 입력하세요\n");
  scanf("%f", &human1.height);

printf("나이 %d 몸무게 %.2f 키 %.2f 입니다.\n", human.age, human.weight, human.height);
printf("나이 %d 몸무게 %.2f 키 %.2f 입니다.\n", human1.age, human1.weight, human1.height);

return 0;
}