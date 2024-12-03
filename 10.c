#include <stdio.h>
int main(){
    int col, row;
    printf("Enter col and row number: ");
    scanf("%d", &col);
    row = col;

    int temp;
    int num[col][row];
    int k = 0;
    int num1[col];

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("col %d : row %d: ", i + 1, j +1);
           scanf("%d", &num[i][j]);
            if(j == col - 1 - i){
            num1[k] = num[i][j];
            k++;
            }
        }
    }
    int n = sizeof(num1) / sizeof(int);
    for(int i = 1; i < n ; i++) {
        for(int j = 0; j < i; j++) {
            if(num1[i] > num1[j]) {
                int temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
            }
        }
    }
   printf("Pha tu ma tran chua sap xep: ");
   printf("\n");
     for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            if(j == col - 1 - i){
                printf("%d ", num[i][j]);
                k++;
            }else {
                printf("   ");
            }

        }
        printf("\n");
    }
   
   
   
      printf("Pha tu ma tran cda sap xep: ");
   
        printf("\n");
   k = 0;
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            if(j == col - 1 - i){
                printf("%d ", num1[k]);
                k++;
            }else {
                printf("   ");
            }

        }
        printf("\n");
    }

    

    return 0;
}
