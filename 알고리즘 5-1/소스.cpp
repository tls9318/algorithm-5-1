
#include <stdio.h>


int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}
int main(void)
{
	int x;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	printf("%d의 순차곱셈의 값은 %d입니다.\n", x, factorial(x));

	return 0;
}