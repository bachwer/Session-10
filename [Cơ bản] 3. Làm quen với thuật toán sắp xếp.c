
#include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,42 , 56, 21 ,67,23, 35,48, 42};
    int n = sizeof(arr) / sizeof(int);

    printf("Mang ban dau: \n");
      for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
      for(int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1;
    while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
     }
    arr[ j + 1] = key;
}
 
      printf("Mang da sua: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

    
