#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, maior = 0;

    while(true){
        scanf("%d", &num);

        if(num == 0){
            printf("%d", maior);
            break;
        }
        if(num > maior)
            maior = num;
        
    }



    return 0;
}