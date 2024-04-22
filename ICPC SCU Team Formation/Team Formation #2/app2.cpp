#include <bits/stdc++.h>
using namespace std;

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long ones = 0, twos = 0;
    for (int i = 0; i < n; i++) {
      int num; cin >> num;
      if (num % 2 == 0) {
        twos += num / 2;
      } else {
        ones++;
        twos += (num-1) / 2;
      }
    }
    cout << ones << " " << twos << endl;
  }
}



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long ones = 0, twos = 0;
        int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            }
            /*
       
        for (int i = 0; i < n; i++) {
        while (arr[i]) {
            if (arr[i]%2==0) {
                twos++;
                arr[i] -= 2;
            } else {
                ones++;
                arr[i]--;
            }
        }
        }
        */
        ones = sum / n;
        twos = (ones*2);
        cout << ones << " " << twos <<endl;
        }
    }