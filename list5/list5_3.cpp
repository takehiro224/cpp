#include <iostream>
#include <string>
using namespace std;

int main() {
    // 文字列オブジェクト
    string s1, s2, s3;

    // 文字列オブジェクトに文字列を格納する
    s1 = "apple";
    s2 = "banana";

    // 文字列を比較する
    if (s1 > s2) {
        cout << "大きい。" << endl;
    }
    else if (s1 < s2) {
        cout << "小さい。" endl;
    }
    else {
        cout << "等しい。" endl;
    }

    // 文字列を連結する
    s3 = s1 + s2;
    cout << s3 << endl;
}