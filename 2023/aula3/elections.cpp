#include <bits/stdc++.h>

using namespace std;

unordered_map<int,int> candidatos;
void solve(){
    //Jeito alternativo para achar o maximo
    // auto pr = max_element(
    //     begin(candidatos), end(candidatos), 
    //     [](const pair<int,int> & p1, const pair<int,int> p2){
    //         return p1.second < p2.second;
    //     }
    // );
    // cout << pr->first << '\n';

    int votos = 0;
    int eleito = 0;
    for(auto it = candidatos.begin(); it != candidatos.end(); it++){
        if (it->second > votos){
            votos = it->second;
            eleito = it ->first; 
        }
    }
    cout << eleito << "\n";
}

int main(){
    int n;
    cin >> n;

    for(int i = 0 ; i < n; i ++){
        int voto;
        cin >> voto;
        candidatos[voto]++;
    }
    solve();    

    

    return 0; 
}