#include <bits/stdc++.h>

using namespace std;

queue<pair<int, int>> agenda;

int solve(){
    int first = agenda.front().second;
    agenda.pop();
    int consultas = 0;
    while(!agenda.empty()){
        int inicio = agenda.front().first;
        if(first <= inicio)
            consultas++;

        agenda.pop();
    }   
    return consultas;
}

int main(){

    int h;

    cin >> h;

    for(int i = 0; i< h; i++){
        int x, y;
        cin >> x >> y;

        agenda.push(make_pair(x,y));    
    }
    cout << solve();
    return 0;
}