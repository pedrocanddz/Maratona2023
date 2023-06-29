#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array


int fatorial(int f){
    if(!f)
        return 1;
    return f * fatorial(f-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int f;
    cin >> f;

    cout << fatorial(f) << "\n";

    return 0;
}