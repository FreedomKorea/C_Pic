#include <stdio.h>
#define MAX_LENGTH 1000

int main(int argc, char *argv[])
{
	char str[MAX_LENGTH];

	printf("문자열 입력\n");
	//gets_s(str, sizeof(str));
	/* gets_s() 는 Visual Studio 에서 사용 */

	fgets(str, sizeof(str), stdin); // gcc 에서 동작 확인

	puts(str);
	printf("%s", str);
	
	return 0;
}