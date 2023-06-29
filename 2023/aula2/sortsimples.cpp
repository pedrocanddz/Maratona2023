#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array

int compare( int i, int j){
    return i > j;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int vetor[4] = {0};
    int sorted[4];
    for(int i = 0 ; i < 3; i++){
        cin >> vetor[i];
        sorted[i] = vetor[i];
    }
    sort(sorted, sorted+3);
    for(int i = 0 ; i < 3 ; i++)
        cout << sorted[i] << "\n";

    cout << "\n";
    for(int i = 0 ; i < 3 ; i++)
        cout << vetor[i] << "\n";
    
    return 0;
}