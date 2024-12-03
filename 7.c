#include <stdio.h>
int main(){
    int col, row;
    printf("Enter col number: ");
    scanf("%d", &col);
    printf("Enter row number: ");
    scanf("%d", &row);
    int n = col * row;
    int temp;
    int num[col][row];
    int k = 0;
    int num1[n];

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("col %d : row %d: ", i + 1, j +1);
            scanf("%d", &num1[k]);
            k++;
        }
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 0; j < i; j++) {
            if(num1[i] < num1[j]) {
                int temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
            }
        }
    }
    k = 1;
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
          num[i][j] = num1[k];
            k ++;
        }
    }

    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
          printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
