#include <iostream>
#include <cmath>
using namespace std;

bool quadEq(double a, double b, doubole c, double *px1, double *px2) {
    double inRoot; // 公式の平方根の中の値
    bool ans; // 解があるかづか

    // 公式の平方根の中の値を求める
    inRoot = b * b - 4 * a * c;

    if (inRoot < 0 ) {
        // もしも公式の平方根の中の値がマイナスなら解なし
        ans = false;
    }
    else {
        // そうでなければ解あり
        ans = true;
        // 2つの解をpx1とpx2がさし示している変数に格納する
        *px1 = (-b + sqrt(inRoot)) / (2 * a);
        *px2 = (-b - sqrt(inRoot)) / (2 * a);
    }
    return ans;
}
