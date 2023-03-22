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
        cout << "小さい。" << endl;
    }
    else {
        cout << "等しい。" << endl;
    }

    // 文字列を連結する
    s3 = s1 + s2;
    cout << s3 << endl;

    // 長さを求める
    cout << s2.length() << endl;

    // 5番目から3文字の部文字列を取り出す
    cout << s3.substr(5, 3) << endl;

    // 5文字目だけを取り出す
    cout << s3[5] << endl;

    // "na"という文字列を見つける
    cout << s3.find("na") << endl;

    // 文字列を空にする
    s3.clear();

    // 文字列がからであることを確認する
    if (s3.empty()) {
        cout << "空です。" << endl;
    }
    else {
        cout << "空ではありません。" << endl;
    }

    return 0;
}