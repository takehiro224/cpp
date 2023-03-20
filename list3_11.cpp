#include <iostream>
using namespace std;

int main() {
    const int DATA_NUM = 10; // 配列の要素数
    // 10人お学生のテストの得点を格納した配列
    int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
    int sum; // 合計点
    double average; // 平均点
    int i; // 配列の要素番号

    // 合計点を求める
    sum = 0;
    for (i = 0; i < DATA_NUM; i++) {
        // 配列の要素の値を集計する
        sum += point[i];
    }

    // 平均点を求める
    average = (double)sum / DATA_NUM;

    // 平均点を表示する
    cout << "平均点:" << average << endl;
    cout << (sizeof(point) / sizeof(int)) << endl;

    return 0;

    int points[] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
    for (auto data: points) {
        cout << data << ",";
    }
    cout << endl;
}