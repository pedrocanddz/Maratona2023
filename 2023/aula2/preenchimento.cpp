#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array


void solve(int t, queue<int> par, queue<int> impar){
    for (int i = 0; i < t; i++){
        int val;
        cin >> val;
        if(val % 2 == 0){
            par.push(val);
        }else{
            impar.push(val);
        }
        if(par.size() == 5){
            int contador = 0;
            while (!par.empty()){
                printf("par[%d] = %d\n",contador++ , par.front());
                par.pop();
            }
        }
        if(impar.size() == 5){
            int contador = 0;
            while (!impar.empty()){
                printf("impar[%d] = %d\n",contador++ , impar.front());
                impar.pop();
            }
        }
        
    }
    int contador = 0;
    while (!impar.empty()){
        printf("impar[%d] = %d\n",contador++ , impar.front());
        impar.pop();
    }
    contador = 0;
    while (!par.empty()){
        printf("par[%d] = %d\n",contador++ , par.front());
        par.pop();
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> par,impar ;
    int t = 15;
    solve(t, par, impar);
    return 0;
}