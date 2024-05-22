#include <iostream>

using namespace std;


void quickSort(float* nums, int left, int right) {

    int i = left, j = right;
    float temp;

    float suppEl = nums[(left + right) / 2]; // Опорный элемент

    while (i <= j) {
        while (nums[i] > suppEl)
            i++;

        while (nums[j] < suppEl)
            j--;

        if (i <= j) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) {
        quickSort(nums, left, j);
    }
    if (i < right) {
        quickSort(nums, i, right);
    }

}


int main() {

    float nums[15];
    float num;

    cout << "Input 15 elements: " << "\n";
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
    }

    quickSort(nums, 0, 14);

    for (int i = 0; i < 15; i++) {
        cout << nums[i] << " ";
    }

    return 0;

}