#include <stdio.h>

void greetUser() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to DevOps C App\n", name);
}

int addNumbers(int a, int b) {
    return a + b;
}

void showMenu() {
    printf("Menu:\n");
    printf("1. Greet User\n");
    printf("2. Calculator\n");
    printf("3. Exit\n");
}

int main() {
    int choice;
    showMenu();
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        greetUser();
    } else if (choice == 2) {
        int x, y;
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Sum: %d\n", addNumbers(x, y));
    } else {
        printf("Goodbye!\n");
    }
    return 0;
}
