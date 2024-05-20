#include <bits/stdc++.h>
using namespace std;


int main() {
    int xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2;
    cin >> xa1 >> ya1 >> xa2 >> ya2;
    cin >> xb1 >> yb1 >> xb2 >> yb2;

    int intersectxa1 = max(xa1, xb1);
    int intersectya1 = max(ya1, yb1);
    int intersectxa2 = min(xa2, xb2);
    int intersectya2 = min(ya2, yb2);

    if (intersectxa1 < intersectxa2 && intersectya1 < intersectya2) {
        cout << intersectxa1 << " " << intersectya1 << " " << intersectxa2 << " " << intersectya2;
    } else cout << -1;

    return 0;
}
