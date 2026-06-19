#include <stdio.h>

int main() {
    int A, area;
    printf("Enter the side of square: ");
    scanf("%d", &A);
    
    area = A * A;
    printf("Area of the square is: %d\n", area);
    return 0;
}