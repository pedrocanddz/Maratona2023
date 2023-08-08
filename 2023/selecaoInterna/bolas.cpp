#include <bits/stdc++.h>

using namespace std;

vector<int> bolas;
bool solve(){
    sort(bolas.begin(), bolas.end());
    int seq = 0;
    for(int i = 0; i < bolas.size() - 1; i++){
        if(bolas[i] == bolas[i+1])
            seq++;
        else
            seq = 0;

        if(seq == 4)
            return false;
    }
    return true;


}

int main(){
    

    int n = 9;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        bolas.push_back(x);
    }

    if(solve())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}