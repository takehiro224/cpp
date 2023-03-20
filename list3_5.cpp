#include <iostream>
using namespace std;

int main() {
    int money; // 残金
    int price; // 買い物をした金額

    // 残金の初期値を10,000円にする
    money = 10000;

    // 残金がある限り繰り返す
    while(money > 0) {
        // 残金を表示する
        cout << "残金:" << money << "円" << endl;

        // 買い物をした金額を入力する
        cout << "買い物した金額:";
        cin >> price;

        // 残金を更新する
        money -= price;
    }
    // 買い物が終了したことを示す
    cout << "買い物終了" << endl;

    int month;

    for (month = 1; month <= 12; month++) {
        cout << month << "月\t"
    }
    cout << endl;

    return 0;
}