#include <stdio.h>
#include <string.h>

int main() {
    FILE *file,*file2;;
    char sentence[] = "This is a sentence to be written into a file.";


    file = fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\FOpen\\file1.c","w");
    file2 = fopen("C:\\Users\\Husai\\OneDrive\\Desktop\\C language\\FOpen\\file2.c","w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
     if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "%s", sentence);
    fclose(file);
    fprintf(file2, "%s", sentence);
    fclose(file2);

    printf("Sentence successfully written to original.txt\n");
    printf("Sentence successfully written to original.txt\n");

    return 0;
}
