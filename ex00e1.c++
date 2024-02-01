#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int h,m,in;
    string sh,sm;
    cin >> h >> m >> in;
    h += (m+in)/60;
    h = h%24;
    m = (m+in)%60;
    if (h == 0) sh = "00";
    else if (h < 10) sh = "0" + to_string(h);
    else sh = to_string(h);
    if (m == 0) sm = "00";
    else if (m < 10) sm = "0" + to_string(m);
    else sm = to_string(m);
    cout << sh << " " << sm;
    return 0;
}