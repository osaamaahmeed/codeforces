#include <bits\stdc++.h>
using namespace std;
#define ll long long

ll sum (ll n) {
  return (n*(n+1))/2;
}

int main () {
  int a,b,x; cin >> a >> b >> x;
  ll maxNum = max(a,b);
  ll minNum = min(a,b);
  ll result = sum(maxNum/x) * x-sum((minNum-1)/x) * x;
  cout << result;
}

// result = sum from 1 to max(a,b) * x - sum from 1 to ((min(a,b))/x) * x;