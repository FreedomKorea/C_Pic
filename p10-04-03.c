#include <stdio.h>
#include <string.h>

int compare(char *str0, char *str1)
{
	while(*str0 == *str1) {
		if(*str0 == '\0') 
			return 1; // 같은면 1
		str0++;
		str1++;
	}
	return -1; // 다르면 -1
}

int main(int argc, char * argv[])
{
	char str0[100];
	char str1[100];

	int i;

	printf("첫번째 문자열 입력\n");
	scanf("%s", str0);

	printf("두번째 문자열 입력\n");
	scanf("%s", str1);

	i = compare(str0, str1);

	if(i == 1){
		printf("2개의 문자열은 같습니다\n");
	}
	else {
		printf("2개의 문자열은 다릅니다\n");
	}

	return 0;
}