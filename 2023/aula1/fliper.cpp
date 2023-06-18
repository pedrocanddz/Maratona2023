#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, r;
    cin >> p >> r;
    if(p==0){
        cout << "C\n";
        return 0;
    }
    if(r == 0)
        cout << "B\n";
    else
        cout << "A\n";

    return 0;
}