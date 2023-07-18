#include <bits/stdc++.h>

using namespace std;

vector< pair<int, int> > dragons;

bool solve(int s, int n){
    for(int i = 0 ; i < n; i++){
        int x,y;
        cin >> x >> y;
        if(s > x){
            s += y;
        }else{
            dragons.push_back(make_pair(x,y));
        }
    }

    sort(dragons.begin(), dragons.end());

    for(int i = 0 ; i < dragons.size(); i++){
        if(s <= dragons[i].first)
            return false;
        s += dragons[i].second;
    }
    
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int s, n;

    cin >> s >> n;

    if(solve(s,n))
        cout << "YES\n";
    else
        cout << "NO\n";



    return 0;
}
