#include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,42 , 56, 21 ,67,23, 35,48, 42};
    int n = sizeof(arr) / sizeof(int);
    printf("%d", n);
    int temp;

    printf("Mang ban dau: \n");
      for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 1; i < n; i++){
        for(int  j = 0; j < i; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
      printf("Mang da sua: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}
