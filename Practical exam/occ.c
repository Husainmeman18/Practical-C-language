#include <stdio.h>
#define MAX_CHAR 256
void Occ(char *str);
int main() {
    char str[100];
    printf("Enter a Sentence:");
    scanf("%[^\n]", str);
    Occ(str);
    return 0;
}
void Occ(char *str) {
    int con[MAX_CHAR] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
        con[str[i]]++;
        }
    }

    printf("Occurrences of each consonant in the sentence:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (con[i] != 0) {
            printf("%c \t %d\n", i, con[i]);
        }
    }
}