#include <stdio.h>
int f(int n) {
	return (n < 0) ? -n : n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
