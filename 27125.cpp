#include <iostream>
using namespace std;
// 27125 范伯綱 655249

int main() {
    long long code;
    cout << "ISBN:";
    cin >> code;

    int last = code % 10;

    int a = 0;
    for (int i = 0; i < 9; i++) {
        code /= 10;
        a += code % 10 * (2 + i);
    }

    if (a % 11 - 11 == last * -1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
