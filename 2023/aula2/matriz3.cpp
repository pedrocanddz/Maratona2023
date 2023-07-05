#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array

int numberOfDigits(int n){
    return to_string(n).length();
}

    int findLastNumber(int n){
        int primeiro = 1;
        for(int i = 0 ; i < n - 1 ; i++)
            primeiro *= 4;
        return primeiro;
    }
void solve(int m) {
    int t = findLastNumber(m);
    int tamanhoAtual = numberOfDigits(t);
    
    int primeiro, col;
    primeiro = col = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(tamanhoAtual) << primeiro;
            if (j != m - 1) {
                cout << " ";
            }
            primeiro *= 2;
        }
        col *= 2;
        primeiro = col;
        cout << '\n';
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    while(true){
        cin >> t;
        if(t == 0)
            break;
        solve(t);
        cout << '\n';
    }


    return 0;
}