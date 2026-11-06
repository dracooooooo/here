#include "io.h"

static void print_array(const int array[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%s%d", i == 0 ? "" : " ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {8, 3, 5, 1, 6};
    const int expected[] = {1, 3, 5, 6, 8};
    const int length = 5;

    printf("Original: ");
    print_array(array, length);

    // Keep all four rounds to show the complete sorting process.
    for (int round = 0; round < length - 1; ++round) {
        for (int j = 0; j < length - 1 - round; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        printf("Round %d: ", round + 1);
        print_array(array, length);
    }

    printf("Sorted: ");
    print_array(array, length);

    for (int i = 0; i < length; ++i) {
        if (array[i] != expected[i]) {
            fail();
        }
    }
    pass();
    return 0;
}
