#include <stdio.h>
void matmulti(int mat1[3][3], int mat2[3][3], int res[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            res[i][j] = 0;
            for(int k=0; k<3; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int mat1[3][3] = {{3, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7},
                       {6, 5, 4},
                       {3, 2, 1}};
    int res[3][3];

    matmulti(mat1, mat2, res);

    printf("Resultatet efter vår multiplikation:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}