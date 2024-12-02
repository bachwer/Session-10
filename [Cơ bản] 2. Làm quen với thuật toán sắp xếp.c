
#include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,42 , 56, 21 ,67,23, 35,48, 42};
    int n = sizeof(arr) / sizeof(int);
    int temp;

    printf("Mang ban dau: \n");
      for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < n - 1; i++){
        for(int  j = 0; j < n - i -1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
      printf("Mang da sua: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

    
