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
    int num1[100];
    
  for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("col %d : row %d: ", i + 1, j +1);
            scanf("%d", &num[i][j]);
            printf("\n");
            num1[k] = num[i][j];
            k++;
            }
        }



  for(int i = 0; i < n; i++){
    printf("%d ", num1[i]);
        
        }


}
