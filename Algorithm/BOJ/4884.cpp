#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long g, a, t, d;

    while (true) {
        cin >> g >> t >> a >> d;
        if (g == -1 && t == -1 && a == -1 && d == -1) break;

        long long to_num = g * a + d;

        for (long i = 1; i < to_num; i++) {
            if (pow(2, i) == to_num) {
                break;
            }
            if (pow(2, i) > to_num) {
                to_num = pow(2, i);
                break;
            }
        }

        long long to = to_num - 1;
        long long jo = (t * (t - 1) / 2) * g;

        long long x = jo + to;
        long long y = 0;
        if (d > 0) y = to_num - (g * a + d);

        cout << g << "*" << a << "/" << t << "+" << d << "=" << x << "+" << y << endl;
    }

    return 0;
}
