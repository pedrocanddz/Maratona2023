#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array

void solve(int t){
    int h, m, s;
    h = m = s = 0;

    while(t >= 3600){
        h++;
        t -=3600;
    }
    while(t >= 60){
        m++;
        t -= 60;
    }
    s = t;

    printf("%d:%d:%d\n", h, m , s);
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    solve(t);


    return 0;
}