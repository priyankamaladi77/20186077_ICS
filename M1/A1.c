#include <stdio.h>
#include <string.h>
void main() {
	/* code */
	char str[1000], strstore[1000];
	printf("please enter a string\n");
	gets(str);
	int j = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' && str[i+1] != ' ') {
			strstore[j++] = str[i];
		} else if (str[i] != ' ') {
			strstore[j++] = str[i];
		}
	}
	printf("string after removing extra spaces\n");
	printf(strstore);
}
