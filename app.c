

#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum: %d\n", addNumbers(x, y));
    return 0;
}
