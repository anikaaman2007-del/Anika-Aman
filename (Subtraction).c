#include <stdio.h>

int main() 

{
    int A, B, R;
    printf("Enter two numbers: ");
    scanf("%d %d", &A, &B);
    
    R = A - B;
    printf("The subtraction result is: %d\n", R);
    return 0;
    
}