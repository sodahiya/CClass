
#include <stdio.h>

void main(){
    int arr1[3][3] = {{5,2,8},{-7,0,1},{3,7,4}};
    int arr2[3][3] = {{11,8,6},{-13,12,3},{0,-5,2}};

    int arr3[3][3];
    int arr4[3][3];

    for(int i =0;i<3;i++) {
        for(int j =0;j<3;j++) {
            for (int k = 0; k < 3; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i =0;i<3;i++) {
        for(int j =0;j<3;j++) {
            for (int k = 0; k < 3; k++) {
                arr4[i][j] += arr2[i][k] * arr1[k][j];
            }
        }
    }

    printf("ARRAy 1 \n");
    for(int i =0;i<3;i++) {
        for(int j =0;j<3;j++) {
            printf(" %8d ",arr3[i][j]);
        }
        printf("\n");
    }

    printf("Array 2 \n");

    for(int i =0;i<3;i++) {
        for(int j =0;j<3;j++) {
            printf(" %8d ",arr4[i][j]);
        }
        printf("\n");
    }
}

