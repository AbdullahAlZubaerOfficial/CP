#include <stdio.h>
#include <stdbool.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SCAN_2D_ARRAY(name, i, j) scanf("%d", &name[i][j])

bool isDiagonal(int row, int col, int arr[row][col]) {
    if (row != col) return false;

    else {
        REP(i, 0, row) {
            REP(j, 0, col) {
                // if(i != j) {
                //     if (arr[i][j] != 0) {
                //         return false;
                //     }
                // }

                if ((i != j) && (arr[i][j] != 0)) return false;

            }
        }
    }

    return true;
}

int main(){
    int row, col; scanf("%d %d", &row, &col);
    int mat[row][col];

    REP(i, 0, row) {
        REP(j, 0, col) {
            SCAN_2D_ARRAY(mat, i, j);
        }
    }

    printf("%s", isDiagonal(row, col, mat) ? "Diagonal" : "Not Diagonal");
    return 0;
}

