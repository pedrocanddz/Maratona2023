#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> vogais;
    string riso;
    cin >> riso;

    for (int i = 0; i < riso.length(); i++)
    {
        if (riso[i] == 'a' || riso[i] == 'e' || riso[i] == 'i' || riso[i] == 'o' || riso[i] == 'u')
        {
            vogais.push(riso[i]);
        }
    }

    for (int i = 0; i < riso.length(); i++)
    {
        if (riso[i] == 'a' || riso[i] == 'e' || riso[i] == 'i' || riso[i] == 'o' || riso[i] == 'u')
        {
            char pop = vogais.top();
            if (pop != riso[i])
            {
                cout << "N" << endl;
                return 0;
            }
            vogais.pop();
        }
    }
    cout << "S" << endl;

    return 0;
}