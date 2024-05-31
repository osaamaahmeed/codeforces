#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () 
{
    int x;
    cin >> x;
    
    int full_steps = x / 5;
    int remainder_steps = (x % 5 != 0) ? 1 : 0;
    int total_steps = full_steps + remainder_steps;
    cout << total_steps;
}