// us.c

#include<stdio.h>

/* unsigned short int형을 US라는
새로운 이름으로 정의함*/
typedef unsigned short int US;

int main(void) {
	US data = 5;
	US temp; // unsigned short int temp; 와 같음

	temp = data;
	printf("temp = %d\n", temp);


	return 0;
}