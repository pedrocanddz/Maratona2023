#include <iostream>

using namespace std;

int lastDigitOfPower(int base, int index) {
    if (index == 0) return 1;

    int result = 1;
    while (index > 0) {
        if (index % 2 == 1) {
            result = (result * base) % 10;
        }
        base = (base * base) % 10;
        index /= 2;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lastDigitOfPower(a, b) << endl;
    }

    return 0;
}
