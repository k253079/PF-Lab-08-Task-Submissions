#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the start of the range:");
    scanf("%d", &start);
    printf("Enter the end of the range:");
    scanf("%d", &end);

    if (start < 2) {
        start = 2;
    }
    printf("Prime numbers from %d to %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int isPrime = 1; 
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
    return 0;
}


