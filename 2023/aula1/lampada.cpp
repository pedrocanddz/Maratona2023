#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    bool a=false,b=false;

    for(int i = 0; i < n; i++){
        int interruptor;
        scanf("%d", &interruptor);
        if(interruptor == 1){
            a = !a;
        }else{
            a = !a;
            b = !b;
        }
    }
    if(a){
        printf("1\n");
    }else{
        printf("0\n");
    }

    if(b){
        printf("1\n");
    }else{
        printf("0\n");
    }


    return 0;
}