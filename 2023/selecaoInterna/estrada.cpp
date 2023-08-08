#include <bits/stdc++.h>

using namespace std;
int tamanho;
vector<int> estrada;

double solve(){
    double min = estrada[0];
    sort(estrada.begin(), estrada.end());

    for(int i = 0 ; i < estrada.size() - 1; i++)
        estrada[i] = (estrada[i+1] - estrada[i])/2.0;        
    
    for(int i = 0;i < estrada.size() - 1; i++){
        double soma = 0;
        soma = estrada[i] + estrada[i+1];
        if(soma < min)
            min = soma;
    }

    return min;
}

int main(){
    int n;
    
    cin >> tamanho >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        estrada.push_back(a);
    }

    cout << solve() << '\n';

    return 0;
}