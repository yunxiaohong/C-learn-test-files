#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int k = 0, court = 0;
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    while (str[k++]) {
        if (('a' <= str[k - 1] && 'z' >= str[k - 1]) ||
            ('A' <= str[k - 1] && 'Z' >= str[k - 1]))
            court++;
    }
    putchar('\n');
    printf("有%d个英文字母，长度为%d\n", court, strlen(str));
    char str2[100];
    strcpy(str2, str);
    printf("%s", str2);
    strcat(str, str2);
    printf("%s", str);
    return 0;
}
