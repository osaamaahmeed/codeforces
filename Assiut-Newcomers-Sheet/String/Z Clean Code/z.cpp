#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  string line ;
    bool comment = false ;
    while(getline(cin,line)){
        bool line_comment = false ;
        if(line[0] >= 35 && line[0] <= 125) {
            for (int i = 0; i < line.size(); i++) {
                if(line[i] == '/' && line[i + 1] == '/') {
                    if(i != 0 && i != 1 && !line_comment) cout << "\n" ;
                    if(!comment) line_comment = true ;
                }
                else if(line[i] == '/' && line[i + 1] == '*') {
                    if(!line_comment) comment = true ;
                }
                else if(line[i] == '/' && line[i - 1] == '*') {
                    if(comment) {
                        comment = false;
                        continue;
                    }
                }
                if (!line_comment && !comment) cout << line[i] ;
                if((line[i] == ';' || line[i] == '}'|| line[i] == '{' || i == line.size() - 1) && !line_comment && !comment && line[i + 2] != '/') {
                    cout << "\n" ;
                }
            }
        }
    }
    return 0;
}