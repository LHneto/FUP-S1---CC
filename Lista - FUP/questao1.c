#include <stdio.h>

int main() {
    int A = 10;
    int B = 20;


    A = A + B;
    B = A - B;
    A = A - B;

   
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}
