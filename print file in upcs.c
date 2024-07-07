#include <stdio.h>
int main() {
    FILE *file1;
    char ch;
    file1 = fopen("file1.txt", "r");
    while ((ch = fgetc(file1)) != EOF) {
    	if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }
        printf("%c",ch);
    }
    fclose(file1);

    return 0;
}

