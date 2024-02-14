#include <stdio.h>
#include <string.h>

int main() {
    char str[101];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    if (strlen(str) < 1 || strlen(str) > 100) {
        printf("Invalid input length\n");
        return 1;
    }

    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
