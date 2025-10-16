#include <stdio.h>

int f(int u) {
	int r = 0;
		while (u) r = r * 10 + u % 10, u /= 10;
			return r;
}
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
	return 0;
}
