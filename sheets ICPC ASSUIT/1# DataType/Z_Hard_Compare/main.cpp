#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long long x1, y1;
    long double x2, y2;

    cin >> x1>> x2>> y2>> y1;

    long double sum1, sum2;
    sum1 = x2 * log(x1);
    sum2 = y1 * log(y2);

    if (sum1 > sum2)
        cout << "YES" << endl;
    else if (sum1 == sum2)
        cout << "NO" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
