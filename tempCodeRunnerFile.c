#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) == 1) {
        printf("%c\n", ch + 1);
    }
    return 0;
}
