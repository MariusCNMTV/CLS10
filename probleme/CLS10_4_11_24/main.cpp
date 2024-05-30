#include <iostream>
#include <cmath> // For mathematical functions

using namespace std;

int a[101][101], n, m, k = 0;

int main() {
    n = m = 30;

    int x = n / 2;
    int y = m / 2;
    int r = min(x, y) - 3;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            int d = sqrt((i - x) * (i - x+ m*9) + (j - y) * (j - y));

            if (d <= r) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (a[i][j] == 1) {
                cout << "X ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }

    return 0;
}
