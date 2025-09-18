//week02-1.cpp part 1
//SOIT106_ADVANCE_001 using c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int b = n;  // backup
    int ans = 0;
    while (n > 0)  // Bo-Pi Fa
    {
        ans = ans * 10 + n % 10;
        n = n / 10;
    }

    printf("%d+%d=%d\n", b, ans, b+ans);
     //printf("%d", ans);
}
