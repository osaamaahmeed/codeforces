// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main () {
//   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int n; cin >> n;
//   // cin.ignore();
// //   int n = 8;
// //   int arr[n] = {2, 5, 3, 0, 2, 3, 0, 3};
//   int arr[n];
//   for (int i = 0; i < n; i++) cin >> arr[i];
//   int maxElement = *max_element(arr, arr+n);
//   int countArray[maxElement+1];
//   fill(countArray, countArray+maxElement+1, 0);
//   for (int i = 0; i < maxElement+1; i++) {
//     int temp = count(arr, arr+n, i);
//     countArray[i] += temp;
//   }
//   for (int i : countArray) cout << i << " ";
// }

#include <iostream>
#include <vector>

using namespace std;

// Function to perform bubble sort and count the number of steps (swaps)
int bubbleSortAndCountSteps(vector<int>& arr) {
    int n = arr.size();
    int stepCount = 0;
    bool swapped;
    
    // Perform bubble sort
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                stepCount++;
                swapped = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
    return stepCount;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    int steps = bubbleSortAndCountSteps(arr);
    
    // cout << "Sorted array: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    // cout << endl;
    
    // cout << "Number of steps (swaps) required to sort the array: " << steps << endl;
    cout << steps;
    return 0;
}
