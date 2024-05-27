#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n; cin >> n;
  int counter = 0;
  int totalIndex = 0;
  int score[n+1];
  fill(score, score+n+1, 0);

  int p; cin >> p;
  // int arrP[p];
  // for (int i = 0; i < p; i++) cin >> arrP[i];

  // int y; cin >> y;
  // int arrY[y];
  // for (int i = 0; i < y; i++) cin >> arrY[i];

  // sort(arrP, arrP+p);
  // sort(arrY, arrY+y);
  for (int i = 0; i < p; i++)
  {
    int x; cin >> x;
    score[x]++;
  }
  int y; cin >> y;
  for (int i = 0; i < y; i++)
  {
    int x; cin >> x;
    score[x]++;
  }
  for (int i = 1; i <= n; i++)
  {
    if (score[i] > 0) counter++;
  }
  n == counter ? cout << "I become the guy." : cout << "Oh, my keyboard!";
}
