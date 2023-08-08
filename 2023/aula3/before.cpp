#include <bits/stdc++.h>

using namespace std;
vector<int> minTime;
vector<int> maxTime;


int main(){
    int d, sumTime;
    cin >> d >> sumTime;
    
    for(int i = 0; i < d; i++){
        int min,max;
        cin >> min >> max;
        minTime.push_back(min);
        maxTime.push_back(max);
    }

    int sum = 0;
    for(int i = 0; i < d; i++)
        sum += minTime[i];
    

    if(sum > sumTime){
        cout << "NO\n";
        return 0;
    }

    vector<int> dias(d);
    for(int i = 0; i < d; i++){
        dias[i] = minTime[i];
        sumTime -= minTime[i];
    }

    for(int i = 0; i < d; i++){
        int rest = maxTime[i] - minTime[i];
        if(rest <= sumTime){
            dias[i] += rest;
            sumTime -= rest;
        }else{
            dias[i] += sumTime;
            sumTime = 0;
        }
    }

    if(sumTime > 0){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    for(int i = 0; i < d; i++){
        cout << dias[i] << " ";
    }
    cout << "\n";

    return 0;
}