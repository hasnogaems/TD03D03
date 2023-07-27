#include <stdio.h>

int get_max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    if (scanf("%d %d", &num1, &num2) != 2 || getchar() != '\n') {
        printf("n/a\n");
        return 0;
    }

    int max = get_max(num1, num2);
    printf("%d\n", max);

    return 0;
}
