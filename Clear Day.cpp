#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = 7 - (x + y);

    if (sum <= 7) {
        printf("%d\n", sum);
    }

    return 0;
}
