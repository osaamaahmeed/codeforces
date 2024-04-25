#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  float n; cin >> n;
  float series = (n*(n+1)*((2*n) + 1)) / 6;
  float seriess = (n*(n+1)) / 2;
  float result = (2*series*pow(seriess,2)) / ((series*seriess)+(series*seriess));
  cout << result;
}