#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isItRated (int n, int rate[], int rateAfter[]) {
  for (int i = 0; i < n; i++) {
    if (rate[i] != rateAfter[i]) return 1;
  }
  return 0;
}

bool isItSorted (int n, int original[], int sorted[]) {
  for (int i = 0; i < n; i++) {
    if (original[i] != sorted[i]) return 0;
  }
  return 1;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int rate[n], rateAfter[n], temp[n];
  for (int i = 0; i < n; i++) {cin >> rate[i]; cin >> rateAfter[i];}
  for (int i = 0; i < n; i++) temp[i] = rateAfter[i];
  sort(temp, temp + n);
  reverse(temp, temp+n);
  if (isItRated(n, rate, rateAfter)) cout << "rated";
  else {
    if (isItSorted(n, rateAfter, temp)) cout << "maybe";
    else cout << "unrated";
  }
}