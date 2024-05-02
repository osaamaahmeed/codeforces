#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n; cin >> n;
  for (int i = 0; i < 5; i++)
  {
    char o; int x;
    cin >> o >> x;
    if (o == '+') n+=x;
    else if (o=='-')n-=x;
    else if (o=='*')n*=x;
  }
  cout << n;
}