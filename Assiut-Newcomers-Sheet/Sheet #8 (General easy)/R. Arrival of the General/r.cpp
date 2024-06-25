#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int steps = 0, maxIndex, minIndex;
  int counterMax = 0, counterMin = 0;
  for (int i = 0; i < n; i++) {
    if (*max_element(arr,arr+n) == arr[i]) maxIndex = i;
    else if (*min_element(arr,arr+n) == arr[i]) minIndex = i;
  }
  // cout << *max_element(arr,arr+n) << " " << *min_element(arr,arr+n) << endl;
  // cout << maxIndex << " " << minIndex << endl;
  if (maxIndex > minIndex && (maxIndex != minIndex-1 || maxIndex != minIndex+1 || minIndex != maxIndex+1 || minIndex != maxIndex-1)) steps--;
  while (true) {if (maxIndex == 0) break; counterMax++; steps++; maxIndex--;}
  while (true) {if (minIndex == n-1) break; counterMin++; steps++; minIndex++;}
  cout << steps;
}