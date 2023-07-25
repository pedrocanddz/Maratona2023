#include <bits/stdc++.h>

using namespace std;

int main (){
    iostream::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    int k1,k2;
    int total;
    cin >> a >> b >> k1 >> k2 >> total;

    int min = 0;
    if( total <= (a * (k1-1) + b * (k2-1)))
        min = 0;
    else
        min = total - (a * (k1-1) + b * (k2-1));

    int maxA = 0;
    
    if(k1 < k2){
        if(total <= (a * k1))
            maxA = total / k1;
        else
            maxA = a + (total - (a * k1)) / k2;
    }else{
        if(total <= (b * k2))
            maxA = total / k2;
        else
            maxA = b + (total - (b * k2)) / k1;
    }
    
    cout << min << " " << maxA << '\n';
    return 0 ;
}