#include <bits/stdc++.h>

using namespace std;

bool validar(int t, vector<int>patterns){
    int tempo = 2 * t;
    int trab = 1;
    int start = patterns[0];

    for(int i = 0 ; i < patterns.size(); i++){
        if(patterns[i] - start > tempo){
            start = patterns[i];
            trab++;
        }
    }
    return trab <= 3;
}

void solve(int p, vector<int>patterns){
    //1 2 4 5 30 60
    //1 7 7 9 9 9
    //1 4 4 14 19 37 59 73 98

    int esq = 0;
    int dir = patterns[p-1];
    int mid;
    int resp = 0;

    while(esq <= dir){
        mid = (esq + dir) / 2;
        if(validar(mid, patterns)){
            resp = mid;
            dir = mid - 1;
        }else{
            esq = mid + 1;
        }
    }
    cout << resp << endl;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int p;
        vector<int> patterns;
        cin >> p;
        for(int j = 0; j < p; j++){
            int k;
            cin >> k;
            patterns.push_back(k); 
        }
        sort(patterns.begin(), patterns.end());
        solve(p, patterns);
    }    

    return 0;
}