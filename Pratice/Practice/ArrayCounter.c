#include <stdio.h>

void main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 1};
    int arr2[7][2] = {0}; // Initialize all elements to 0
    int uniqueCount = 0;

    for (int i = 0; i < 7; i++) {
        int flag = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr2[j][0]) {
                arr2[j][1]++;
                flag = 1;
                break;
            }
        }
        if (flag == 0) { // New unique element
            arr2[uniqueCount][0] = arr[i];
            arr2[uniqueCount][1] = 1;
            uniqueCount++;
        }
    }

    int maxElement = arr2[0][0];
    int maxCount = arr2[0][1];

    for (int i = 1; i < uniqueCount; i++) {
        if (arr2[i][1] > maxCount) {
            maxCount = arr2[i][1];
            maxElement = arr2[i][0];
        }
    }

    printf("Max = %d Count = %d\n", maxElement,maxCount);
}
