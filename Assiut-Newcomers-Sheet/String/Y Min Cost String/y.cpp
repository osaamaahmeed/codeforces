#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  int arr[26];
  for (int i = 0; i < 26; i++) cin >> arr[i];
  ll sum = 0;
  for (int i = 0; i < s.size()-1; i++)
  {
    if (s[i] == '?') {
      
    }
    if (s[i+1] != '?') {
      
        int index1 = int(s[i]) - 97;
        int index2 = int(s[i+1]) - 97;
        // cout << index1 << " " << index2 << endl;
        sum += abs(arr[index1] - arr[index2]);
    }
  }
  cout << sum;
}