#include <bits/stdc++.h>

using namespace std;

int main (){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    /**
     * 6
     * 4
     * 9
     * 10
     * 89
     * 
     * out: 
     * 5 9
     * 
     * 6 * 9 = 54
     * 4 * 10 = 40
     * 
    */


    int a,b;
    int k1,k2;
    int total;
    cin >> a >> b >> k1 >> k2 >> total;

    int ca = a * k1;
    int cb = b * k2;
    if(ca > cb){
        while(true){
            if(total - ca < 0){
                cout << "0 " << total / k1 << endl;
                break;
            }
            total -= ca;
            if(total - cb < 0){
                cout << total / k2 << " " << total / k2 << endl;
                break;
            }
            total -= cb;
        }
    }
    return 0 ;
}