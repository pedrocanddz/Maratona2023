#include <iostream>

using namespace std;

bool check(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if (check(n)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}