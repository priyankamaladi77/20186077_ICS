#include <stdio.h>
#include <stdlib.h>

int htoi(char str[]);
int main(void) {
    char str[1024];
    int i, c;
    for (i=0; (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[i] = '\0';
    printf("%s: %d\n", str, htoi(str));
    return EXIT_SUCCESS;
}

int htoi(char str[]) {
    int i;
    int c, num;
    num = 0;
    for (i = 0; (c = str[i]) != '\0'; ++i) {
        num *= 16;
        if (i == 0 && c == '0') {
            c = str[++i];
            if (c != 'x' && c != 'X')
                --i;
        } else if (c >= '0' && c <= '9')
            num += c - '0';
        else if (c >= 'a' && c <= 'f')
            num += 10 + (c - 'a');
        else if (c >= 'A' && c <= 'F')
            num += 10 + (c - 'A');
        else
            return num;
    }
    return num;
}
