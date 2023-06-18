#include <bits/stdc++.h>

using namespace std;

int fibRecursivo(int n);

int main(){

    int n;
    cin >> n;

    cout << fibRecursivo(n) << "\n";
    return 0;
}

int fibRecursivo(int n){
    if( n == 1 || n == 0)
        return 1;
    return fibRecursivo(n - 1) + fibRecursivo(n - 2);
    
}