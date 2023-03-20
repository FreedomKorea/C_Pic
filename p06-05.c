/* 그림으로 배우는 C언어
 * Lesson 6
 * 연습문제 5번 소수구 하기
 * 1은 소수로 정의 하지 않음
 */

#include <stdio.h>

int main(int argc, char* argv[])
{

	int i, count=0, res=0;

	printf("2이상의 정수를 입력 하세요.\n");

	scanf(" %d", &res);

	for(i=2; i<=res; i++) {
		if( (res%i)==0 ) // 입력 받은 수를 2로 나누어서 나머지가 0과 같으면
			count++; // 카운트 증가
	}
	if(count == 1) // 0이 하나만 있으면 소수
		printf(" %d 은(는) 소수 입니다.\n", res);
	else
		printf(" %d 은(는) 소수가 아닙니다..\n", res);

 //system("PAUSE");

	return 0;
}