#include <stdio.h>
void main() {
	/* code */
	char str[1000], revstr[1000];
	int revcnt, count = 0;
	printf("enter a string\n");
	gets(str);
	while (str[count] != '\0') {
		count++;
	}
	revcnt = count - 1;
	for(int i = 0; i < count; i++) {
		revstr[i] = str[revcnt];
		revcnt--;
	}
	printf("string after reversing...\n");
	printf("%s\n",revstr);
}