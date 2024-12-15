#include <stdio.h>

int main(){
    char nama[5][5] = {"Jen", "Han", "Kim", "Eri", "Sam"};
    int rangking[5] = {1,2,3,4,5};

    char nama_baru[5][5] = {"Jen", "Han", "Eri", "Kim", "Sam"};
    int rangking_baru[5] = {1,2,3,4,5};

    printf("\nData sebelum dimanipulasi: \n");
    printf("Nama\tRangking\n");
    for(int i=0; i<5; i++){
        printf("%s\t%d\n", nama[i], rangking[i]);
    }

    printf("\nData sesudah dimanipulasi: \n");
    printf("Nama\tRangking\n");
    for(int i=0; i<5; i++){
        printf("%s\t%d\n", nama_baru[i], rangking_baru[i]);
    }
    return 0;
}
