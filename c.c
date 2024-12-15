#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j;

    // Input 1elemen matriks A
    printf("Masukkan elemen matriks A (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elemen matriks B
    printf("\nMasukkan elemen matriks B (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks A dan B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Menampilkan hasil penjumlahan matriks
    printf("\nHasil penjumlahan matriks A dan B (C):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
