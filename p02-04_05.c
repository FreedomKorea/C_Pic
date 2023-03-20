#include <stdio.h>
#include <time.h> // delay  함수. 1000 = 1초

int main(int argc, char* argv[])
{
	printf("%d\t%d\t%d\t", 1, 2, 3);
	//printf("\nOctal Number\n");
	//printf("%o\n%o\n%o", 6, 20, 13);
	//6 24 15
	//printf("\nHexa Decimal\n");
	//printf("0x%02X\n0x%02X\n0x%02X", 6, 20, 13);
	// 06 14 0D
	// 위는 내가 푼거

	// 아래 문제가 원하는 답
	printf("\nOctal Number\n");
  printf("%d\n%d\n%d", 06, 024, 015);  // Octal 은 숫자 앞에 숫자 0 (영문자 o 아니고)
  printf("\nHexa Decimal\n");
  printf("%d\n%d\n%d", 0x06, 0x14, 0x0D);
 //system("PAUSE");

	return 0;
}