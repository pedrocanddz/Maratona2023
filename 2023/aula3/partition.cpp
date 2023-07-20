#include <bits/stdc++.h>


using namespace std;

int solve(int n){
    int negativos;
    int positivos;
    negativos = positivos = 0;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        if(val < 0)
            negativos += val;
        else
            positivos += val;
    }
    return positivos - negativos;
}

int main(){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int val = solve(n);
    
    cout << val << '\n';

    return 0;
}