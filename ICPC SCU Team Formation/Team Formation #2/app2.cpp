#include <iostream>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll ones = 0, twos = 0;
        ll arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) {
            if (arr[i]%2==0) {
                twos += arr[i] / 2;
            } else {
                ones++;
                twos += (arr[i]-1) / 2;
            }
        }
        cout << ones << " " << twos <<endl;
        }
    }