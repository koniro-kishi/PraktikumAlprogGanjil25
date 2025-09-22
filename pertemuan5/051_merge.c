#include <stdio.h>

int main(){
    int arr1[2000] = {0};
    int arr2[2000] = {0};
    int counter1 = 0;
    int counter2 = 0;

    while(1){
        int inputArr1; scanf("%d", &inputArr1);
        if(inputArr1 == -9) break;
        arr1[i] = inputArr1;
        counter1++;
    }

    while(1){
        int inputArr2; scanf("%d", &inputArr2);
        if(inputArr2 == -9) break;
        arr2[i] = inputArr2;
        counter2++;
    }

    int i1 = 0, i2 = 0;

    while(i1 < counter1 && i2 < counter2){
        if(arr1[i1] <= arr2[i2]){
            printf("%d ", arr1[i1]);
            i1++;
        } else if (arr1[i1] > arr2[i2]){
            printf("%d ", arr2[i2]);
            i2++;
        }
    }

    while(i1 < counter1){
        printf("%d ", arr1[i1]);
        i1++;
    }

    while(i2 < counter2){
        printf("%d ", arr2[i2]);
        i2++;
    }
}
