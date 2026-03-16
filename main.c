#include <stdio.h>
#include <stdbool.h>

#define TOTAL_DIGITS    14

int main(void) {
    int arr[TOTAL_DIGITS] = { 3, 4, 5, 6 };
    int insert_indx = 2;

    for (int i = TOTAL_DIGITS - 1; i > insert_indx; i--) {
        arr[i] = arr[i-1];
    }

    arr[insert_indx] = 10;

    for (int i = 0; i < TOTAL_DIGITS; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}