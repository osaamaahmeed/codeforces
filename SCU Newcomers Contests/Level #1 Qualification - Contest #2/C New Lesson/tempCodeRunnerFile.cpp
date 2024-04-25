#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n; cin >> n;
  ll series = (n*(n+1)*((2*n) + 1)) / 6;
  ll seriess = (n*(n+1)) / 2;
  float result = (2*series*pow(seriess,2)) / ((series*seriess)+(series*seriess));
  cout << fixed << setprecision(9);
  cout << result;
}