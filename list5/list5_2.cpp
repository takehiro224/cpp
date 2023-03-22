#include <iostream>
#include <string>
using namespace std;

int main() {
    int ans; // 文字列の長さ
    string s; // 文字列オブジェクト

    // 文字列オブジェクトに文字列を格納する
    s = "hello, world";

    // 文字列の長さを求める
    ans = s.length();

    // 文字列の長さを表示する
    cout << ans << endl;

    return 0;
}