#include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,42 , 56, 21 ,67,23, 35,48, 42};
    int n = sizeof(arr) / sizeof(int);
    int num;
    printf("%d", n);
    int temp;

    printf("Mang ban dau: \n");
      for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 1; i < n; i++){
        for(int  j = 0; j < i; j++){
            if(arr[i] < arr[j]){
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
    printf("\n");
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("\n");
    int m = 0;
    int right =  n -1;
    int left = 0;
        while(left <= right){
           int mid = left + (right - left) / 2;

            if(arr[mid] == num){
               printf("Da thay %d tai vi tri %d.\n", num + 1, mid);
                m = 1;
                break;
            }

            if(arr[mid] > num){
                right = mid - 1;
            }

            if(arr[mid] < num){
                left = mid + 1;
            }
        }
    
       if (!m) {
        printf("Khong tim thay %d trong mang.\n", num);
    }



 

}
