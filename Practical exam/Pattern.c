#include <stdio.h>

int main() {
    int row, col;
    for (row = 10; row >= 6; row--) {
        for (col = 10; col > row; col--) {
            printf("_ ");
        }
        for (col = row; col >= 6; col--) {
            printf("%d ", col);
        }
        
        printf("\n");
    }

    return 0;
}
