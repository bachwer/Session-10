#include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,42 , 56, 21 ,67,23, 35,48, 42};
    int n = sizeof(arr) / sizeof(int);
    int num;
    
    int m = 0;
    printf("\n");
    printf("Enter your number: ");
    scanf("%d", &num);

    printf("\n");
    int arrr[n];
     for(int i = 0; i < n; i++){
       if(num == arr[i]){
        arrr[m] = i;
        m++;
       }
    }
    printf("Phan tu %d xuan hien %d lan trong ham tai vi tri:",  num, m);
    for(int i = 0; i < m ; i++){
        printf(" %d ",arrr[i] );
    }
}



 

