#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s;
  bool cont = false;
  while(getline(cin, s)) {
    string line = s;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '/' && s[i+1] == '*') {cont = true; break;}
      else if (s[i] == '*' && s[i+1] == '/') {s=""; cont = false; break;}

      if (s[i] == '/' && i == 0) s="";
      if (s[i] == '/' && i != 0) s = s.substr(0, i);
    }
    if(!s.empty() && cont == false)
      cout << s << endl;
  }
}