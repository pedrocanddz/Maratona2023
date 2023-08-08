#include <bits/stdc++.h>

using namespace std;

vector<int> ordem;
stack<int> street;
bool solve(){
    int prox = 1;
    for(int i = 0; i < ordem.size(); i++){
        if(ordem[i] != prox){
            if(!street.empty() && street.top() < ordem[i] ){
                return false;
            }
            street.push(ordem[i]);
        }
        else{
            prox++;
            while(!street.empty() && street.top() == prox){
                street.pop();
                prox++;
            }   
        }
    }

    if(street.empty())
        return true;
    else
        return false;
}

int main(){

    while(true){
        int n;
        cin >> n;
        if(n == 0)
            break;
        ordem.clear();
        while(!street.empty())
            street.pop();
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            ordem.push_back(x);
        }
        if(solve())
            cout << "yes\n";
        else
            cout << "no\n";
    }

    
    return 0;
}