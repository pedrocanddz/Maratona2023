#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,p,f,d;

    scanf ("%d %d %d %d", &h, &p, &f, &d);

    int pista[16] = {0};

    pista[h] = 1;
    pista[p] = 2;

    if(d == -1){
        d = 1;
    }else{
        d = -1;
    }
    bool pego = false;
    while (true)
    {
        
        f+=d;
        if (f == -1){
            f = 15;
        }
        if(f == 16){
            f = 0;
        }

        if(pista[f] == 1){
            pego = false;
            break;
        }
        if(pista[f] == 2){
            pego = true;
            break;
        }
    }

    if(pego){
        printf("S\n");
    }else{
        printf("N\n");
    }
    


    return 0;
}