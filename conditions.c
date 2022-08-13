// C Program to check whether the number is odd or even
#include <stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("The number is even %d\n", n);
    }
    else {
        printf("The number is odd \n");
    }
    return 0;
}