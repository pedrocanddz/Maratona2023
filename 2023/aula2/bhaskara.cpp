#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array

double delta(double a, double b, double c){
    return b * b - 4.0 * a * c;
}

bool solve(double a, double b, double c){
    //x = -b +- raiz(delta)
    //          /2a

    //delta = b² - 4ac
    if(a == 0.00)
        return false;
    double deltaVal = delta (a, b, c);
    if(deltaVal < 0.00)
        return false;
    
    double xPos = (-b + sqrt(deltaVal))/ (2.00*a);
    double xNeg = (-b - sqrt(deltaVal))/ (2.00*a);

    
    printf("R1 = %.5lf\n", xPos);
    printf("R2 = %.5lf\n", xNeg);

    return true;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b,c;

    cin >> a >> b >> c;
    if(!solve(a, b, c))
        cout << "Impossivel calcular\n";

    return 0;
}