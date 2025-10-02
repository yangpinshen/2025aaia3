#include <stdio.h>

int main(){
	int arr[10], n = 0;

	while (n < 10){
		scanf("%d", &arr[n]);
		if (arr[n] == 0) break;
		n++;
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
