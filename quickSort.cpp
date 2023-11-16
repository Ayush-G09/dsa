#include<bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& input, int start, int end) {
    int pivot = input[start];
    int i = start + 1;
    int j = end;

    while (i <= j) {
        while (i <= end && input[i] <= pivot) {
            i++;
        }

        while (j > start && input[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(input[i], input[j]);
        }
    }

    swap(input[start], input[j]);
    return j;
}

void quickSort(vector<int>& input, int start, int end) {
    if (start < end) {
        int pIndex = partitionArray(input, start, end);
        quickSort(input, start, pIndex - 1);
        quickSort(input, pIndex + 1, end);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}