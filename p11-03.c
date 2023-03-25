#include <stdio.h>

typedef struct{
  int age;
  float weight;
  float height;
}Person;

void again(Person *p);

int main(int argc, char *argv[])
{
  Person p;

  printf("나이를 입력하세요\n");
  scanf("%d", &p.age);

  printf("몸무게를 입력하세요\n");
  scanf("%f", &p.weight);

  printf("키를 입력하세요\n");
  scanf("%f", &p.height);


again(&p);

return 0;
}

void again(Person *p)
{
  printf("나이 %d 몸무게 %.2f 키 %.2f 입니다.\n", p->age+1, p->weight, p->height);
}