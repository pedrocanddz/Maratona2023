#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, zeros;

    scanf("%d %d", &num, &zeros);

    for(int i = 0; i < zeros; i++){
        if(num % 10 == 0){
            num /= 10;
        }else{
            num --;
        }
    }
    printf("%d\n", num);

    return 0;
}