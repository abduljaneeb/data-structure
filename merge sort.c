#include <stdio.h>
#define MAX 8

int arr[MAX];

void merge(int low, int mid, int high) {
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() {
    printf("Enter the unsorted elements:\n");
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    merge_sort(0, MAX - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
