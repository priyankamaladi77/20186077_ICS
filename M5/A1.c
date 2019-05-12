#include<stdio.h>

int strindex(char s[],char t[]);
int main(void) {
    char str[] = "sabcdedfabcde";
    char pattern[] = "d";
    int found;
    found = strindex(str, pattern);
    printf("right index: %d\n", found);
}

int strindex(char s[],char t[]) {
    int i,j,k, res;
    res = -1;
    for(i=0; s[i] != '\0'; i++) {
        for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
        if(k>0 && t[k] == '\0')
            res = i;
    }
    return res;
}
