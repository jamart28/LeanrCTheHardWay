#include <stdio.h>

void crash() {
    char *test = NULL;
    int i = 0;

    for (i = 0; i < 1000000; i++) {
        printf("%c", test[i]);
    }
}

int main(int argc, char *argv[]) {
    int age = 100;
    int height = 72;

    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}
