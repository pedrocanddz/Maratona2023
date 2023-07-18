#include <bits/stdc++.h>

using namespace std;

stack<char> pilha;

bool solve(string c){

    char topo;
    for(int i = 0 ; i < c.length(); i++){
        switch (c[i])
        {
        case ('('):
            pilha.push('(');
            break;

        case('{'):
            pilha.push('{');
            break;

        case('['):
            pilha.push('[');
            break;

        case (')'):
            if(pilha.empty() || pilha.top() != '(')
                return false;
            pilha.pop();
            break;

        case ('}'):
            if(pilha.empty() || pilha.top() != '{')
                return false;
            pilha.pop();
            break;

        case (']'):
            if(pilha.empty() || pilha.top() != '[')
                return false;
            pilha.pop();
            break;
        default:
            break;
        }
    }
    if(pilha.empty())
        return true;
    return false;
}

int main(){
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0 ; i < t; i++){
        string expression;
        cin >> expression;
        while(!pilha.empty())
            pilha.pop();
        
        if(solve(expression))
            cout << "S\n";
        else
            cout << "N\n";
    }


    return 0;
}