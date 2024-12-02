#include <stdio.h>
int main(){
    int num;
    int found = 0;
    int number[] = { 2, 3, 4, 5, 4, 6, 3, 4};
    int n = sizeof(number) / sizeof(int);
    printf("Enter your number: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++) {
        if(number[i] == num) {
            printf("--found at position: %d--", i + 1 );
            found = 1;
            break;

        }
    }
    if(!found) {
        printf("--Not Found--");
    }

}
