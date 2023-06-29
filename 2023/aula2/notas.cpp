#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array
#define notas "%d nota(s) de R$ %d.00\n"
#define moedas "%d moeda(s) de R$ 0.%d\n"

int calcNotas(int val, int nota){
    int remainder = val % (nota);
    printf(notas, val/nota, nota);
    return remainder;
}
int calcMoedas(int val, int moeda){
    int remainder = val % (moeda * 100);
    printf(moedas, val/moeda, moeda);
    return remainder;
}

void solve(int m){
    printf("NOTAS:\n");
    m = calcNotas(m, 100);
    m = calcNotas(m, 50);
    m = calcNotas(m, 20);
    m = calcNotas(m, 10);
    m = calcNotas(m, 5);
    m = calcNotas(m, 2);


printf("MOEDAS:\n");
    m * 100;
    m = calcMoedas(m, 100);
    m = calcMoedas(m, 50);
    m = calcMoedas(m, 25);
    m = calcMoedas(m, 10);
    m = calcMoedas(m, 5);
    m = calcMoedas(m, 1);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int val;
    cin >> val;

    solve(val * 100);
    

    return 0;
}