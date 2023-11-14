#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; 
    int n2 = right - mid;

    std::vector<int> leftArray(n1); // create temp left array
    std::vector<int> rightArray(n2); // create temp right array

    for (int i = 0; i < n1; i++) // copy data to temp arrays leftArray[] and rightArray[]
        leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; j++) // copy data to temp arrays leftArray[] and rightArray[]
        rightArray[j] = arr[mid + 1 + j]; 

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) { // merge the temp arrays back into arr[left..right]
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Given array is \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "\nSorted array is \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";

    return 0;
}
