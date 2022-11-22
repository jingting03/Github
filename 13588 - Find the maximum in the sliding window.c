#include <stdio.h>

int main() {
    int N;
    int sliding_window;
    int matrix[16][16] = {0};

    scanf("%d", &N);
    scanf("%d", &sliding_window);

    // The input of the 2D matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < N - sliding_window + 1; i++) {
        for(int j = 0; j < N - sliding_window + 1; j++) {
            int max = -1;
            for(int r = i; r < i + sliding_window; r++) {
                for(int c = j; c < j + sliding_window; c++) {
                    if(matrix[r][c] > max) max = matrix[r][c];
                }
            }
            printf("%5d", max);
        }
        printf("\n");
    }

    return 0;
}
