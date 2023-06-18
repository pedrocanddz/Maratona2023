#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int anos = 0;
    while(b >= a){
        
        anos++;
        a *= 3;
        b *= 2;
    }

    printf("%d\n", anos);
    return 0;
}