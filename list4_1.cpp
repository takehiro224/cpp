#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double data;
    double ans;

    cout << "平方根を求める数値:";
    cin >> data;

    // sqrt関数を使って平方根を求める
    ans = sqrt(data);
    // 平方根を表示する
    cout << ans << endl;

    return 0;
}
