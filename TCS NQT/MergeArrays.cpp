#include <iostream>
using namespace std;

void mergeTwoSortedArrays(int arr1[], int size1, int arr2[], int size2, int ans[]) {
    int i = 0, j =0, k = 0;

    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else {
            ans[k] = arr2[j];
            k++;
            j++;
        }
        while(i < size1) {
            ans[k] = arr2[i];
            i++;
            k++;
        }
        while(j < size2) {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
}