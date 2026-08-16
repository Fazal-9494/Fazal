#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        if (i < n) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
