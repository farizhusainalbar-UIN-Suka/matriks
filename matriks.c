#include <stdio.h>

int main(){
    int A[2][2], B[2][2], C[2][2], hasil[2][2];
    int i, j;

    printf("Masukkan elemen matriks A (2x2):\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Masukkan elemen matriks B (2x2):\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Masukkan elemen matriks C (2x2):\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("C[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &C[i][j]);
        }
    }

    printf("A + B - C = \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            hasil[i][j] =  A[i][j] + B[i][j] - C[i][j];
        }
    }

    printf("Hasil = \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}
