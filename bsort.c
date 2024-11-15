#include <stdio.h>

int* bsort(int* arr, int n) {
    int temp = 0;   // to store temporary store the data
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j + 1]) { // checking if ith element is > (i+1)th if yes swapping them
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
// Implementing the pseudocode
void sortAndFindMedian(int* arr, int n) {
    int median = 0;
    int* s_arr = bsort(arr, n);
    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", s_arr[i]);
    }
    printf("\n");
    if(n%2 == 0) {
        median = (s_arr[(n/2) - 1] + s_arr[n/2])/2;
        printf("Median is: %d", median);
    }
    else {
        median = s_arr[n/2];
        printf("Median is: %d", median);
    }
}

int main() {
    int n;
    int numbers[n];

    printf("Enter the size of an array: \n");
    scanf("%d", &n);

    printf("Enter elements of the array: \n");

    for(int i = 0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }
    sortAndFindMedian(numbers, n);
    return 0;
}
