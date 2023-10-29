#include <stdio.h>
#include <math.h>

void findRamanujanHardyNumbers(int n) {
    printf("Ramanujan-Hardy numbers less than %d^3:\n", n);
    int count = 0;

int num, i,j;
    for (num = 1; ; num++) {
        int found = 0;
        for (i = 1; i <= cbrt(num); i++) {
            for (j = i; j <= cbrt(num); j++) {
                if ((i * i * i) + (j * j * j) == num) {
                    found++;
                    if (found >= 2) {
                        printf("%d = %d^3 + %d^3\n", num, i, j);
                        count++;
                        if (count >= n) {
                            return;
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    findRamanujanHardyNumbers(n);
    
    return 0;
}

