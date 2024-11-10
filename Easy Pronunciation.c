#include <stdio.h>
#include <string.h>

int main() {
    int tc, x, cnt;
    char s[100];

    scanf("%d", &tc);
    while (tc--) {
        cnt = 0;
        scanf("%d %s", &x, s);

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u') {
                cnt++;
            }
        }

        if (cnt >= 4) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

