#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  int arr[26];
  ll sum = 0;
  for (int i = 0; i < 26; i++) cin >> arr[i];

  for (int i = 0; i < s.size()-1; i++)
  {
    int index1 = 0, index2 = 0;
    if (s[i] != '?' && s[i+1] != '?') {
      index1 = int(s[i] - 97);
      index2 = int(s[i+1] - 97);
      // cout << arr[index1] << " " << arr[index2];
      sum += abs(arr[index2] - arr[index1]);
      cout << sum << endl;
    }
    // cout << endl;
  }
  cout << sum;
}