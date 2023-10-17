#include <stdio.h>

void findSubarray(int A[], int N, int S) {
    int left = 0, right = 0;
    int currentSum = 0;
    int found = 0;

    while (right < N) {
        currentSum += A[right];

        while (currentSum > S) {
            currentSum -= A[left];
            left++;
        }

        if (currentSum == S) {
            found = 1;
            break;
        }

        right++;
    }

    if (found) {
        printf("The Elements from Index %d to %d when summed results in the output of %d.\n", left, right, S);
    } else {
        printf("No subarray found with the given sum.\n");
    }
}

int main() {
    int N, S;

    printf("Enter Number S: ");
    scanf("%d", &S);

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int A[N];
    printf("Enter elements into the array:\n");
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    findSubarray(A, N, S);

    return 0;
}

