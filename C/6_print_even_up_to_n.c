#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
